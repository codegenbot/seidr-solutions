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

// function to cut the vector
vector<int> cutVector(const vector<int>& input) {
    // find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    int left = 0;
    int right = input.size() - 1;
    int minDiff = INT_MAX;
    int diff = 0;
    while (left < right) {
        if (input[left] == input[right]) {
            return { input[left], input[right] };
        } else {
            diff = abs(input[left] - input[right]);
            if (diff < minDiff) {
                minDiff = diff;
                break;
            }
            left++;
            right--;
        }
    }
    return { input[left], input[right] };
}

// main function to test the code
int main() {
    vector<vector<int>> inputs = { { 1 }, { 0 }, { 1, 10 }, { 1, 100 }, { 1, 1000 }, { 1, 10000 } };
    for (const auto& input : inputs) {
        vector<int> output = cutVector(input);
        cout << "Input: ";
        for (int i : input) {
            cout << i << " ";
        }
        cout << endl;
        cout << "Output: ";
        for (int i : output) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}