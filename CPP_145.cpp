#include <vector>
#include <algorithm> 
#include <cassert>
#include <iostream>

using namespace std;

bool isEqual(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> sortAndReturn(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({-sumOfDigits, i});

    }

    std::sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int mainAgain() {  
    vector<int> nums = {0,6,6,-76,-21,23,4};
    cout << "[";
    for(int i=0; i<nums.size();i++) {
        cout << nums[i];
        if(i < nums.size()-1) {
            cout << ", ";
        }
    }
    cout << "]\n";
    
    vector<int> result = sortAndReturn(nums);
    cout << "[";
    for(int i=0; i<result.size();i++) {
        cout << result[i];
        if(i < result.size()-1) {
            cout << ", ";
        }
    }
    cout << "]\n";
    
    assert (isEqual(vector<int>{-76, -21, 0, 4, 23, 6, 6}, sortAndReturn({0,6,6,-76,-21,23,4})));
    return 0;
}