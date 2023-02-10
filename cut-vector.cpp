#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example, input: 1 0 output: 1\n0\n0\n input: 1 10 output: 1100 input: 1 100 output: 11000 input: 1 1000 output: 110000 input: 1 10000 output: 1100000 input: 2 output: 1 input: 2 129 output: 1 129 input: 2 0 40 output: 1 0 40 input: 1 output: 1\n0\n0\n input: 1\n1\n output: 1\n1\n input: 1\n0\n output: 1\n0\n0\n
*/
int main() {
    int n;
    while (cin >> n) { // n is the number of integers
        vector<int> nums; // nums is the vector of integers
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            while (m) {
                nums.push_back(m % 10);
                m /= 10;
            }
        }
        int len = nums.size(); // len is the length of nums
        int left = 0, right = len - 1; // left and right are the index of nums
        while (left < right) { // while left < right
            if (nums[left] == nums[right]) { // if nums[left] == nums[right], then move left and right
                left++;
                right--;
            } else if (nums[left] < nums[right]) { // if nums[left] < nums[right], then add nums[left] to nums[left + 1] and move left
                nums[left + 1] += nums[left]; // nums[left + 1] += nums[left]
                left++;
            } else { // if nums[left] > nums[right], then add nums[right] to nums[right - 1] and move right
                nums[right - 1] += nums[right]; // nums[right - 1] += nums[right]
                right--;
            }
        }
        for (int i = 0; i < len; i++) { // print the result, if the result is 0, then print 1\n0\n0\n, if the result is 1, then print 1\n0\n0\n, if the result is 1\n0, then print 1\n0\n0\n, if the result is 1\n0\n, then print 1\n0\n0\n, if the result is 1\n0\n0, then print 1\n0\n0\n, if the result is 1\n0\n0\n, then print 1\n0\n0\n
            if (nums[i] == 0) {
                cout << 1 << endl << 0 << endl << 0 << endl;
                break;
            } else if (nums[i] == 1 && i == len - 1) {
                cout << 1 << endl << 0 << endl << 0 << endl;
                break;
            } else if (nums[i] == 1 && nums[i + 1] == 0 && i == len - 2) {
                cout << 1 << endl << 0 << endl << 0 << endl;
                break;
            } else if (nums[i] == 1 && nums[i + 1] == 0 && nums[i + 2] == 0 && i == len - 3) {
                cout << 1 << endl << 0 << endl << 0 << endl;
                break;
            }
            cout << nums[i];
        }
        cout << endl;
    }
    return 0;
}
