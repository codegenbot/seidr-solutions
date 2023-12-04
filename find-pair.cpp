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
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int left = 0, right = n - 1;
    while (left < right) {
        if (nums[left] + nums[right] == target) {
            cout << nums[left] << " " << nums[right] << endl;
            return 0;
        } else if (nums[left] + nums[right] < target) {
            left++;
        } else {
            right--;
        }
    }
    cout << "No solution" << endl;
    return 1;
}