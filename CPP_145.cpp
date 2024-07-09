```cpp
#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int main() {
    vector<int> nums = {12, 15, 24};
    vector<int> output = order_by_points(nums);
    for(int i:output){
        cout<<i<<" ";
    }
    return 0;
}