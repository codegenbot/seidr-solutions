#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

struct Pair {
    int first;
    int second;
};

bool sameVector(const vector<int>& v1, const vector<int>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(find(v2.begin(), v2.end(), v1[i]) == v2.end()) return false;
    }
    return true;
}

vector<int> order_by_points(vector<int> nums) {
    vector<Pair> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) { return a.first < b.first; });

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

bool isSame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

int main() { 
    vector<int> nums = {0,6,6,-76,-21,23,4};
    cout << "Sorted array: ";
    for(int num : order_by_points(nums)) {
        cout << num << " ";
    }
    cout << endl;
    if (!isSame(order_by_points({0,6,6,-76,-21,23,4}), {0, -76, -21, 4, 6, 6, 23})) {
        cout << "Test failed" << endl;
    } else {
        cout << "Test passed" << endl;
    }
    return 0;
}