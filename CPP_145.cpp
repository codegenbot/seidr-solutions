#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
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
    for (int i = 0; i < nums.size(); i++) {
        if (pairs[i].second == i) {
            result.push_back(nums[i]);
        } else {
            int j = i;
            while (j > 0 && pairs[j-1].second != i) {
                pairs[j] = pairs[--j];
            }
            result.push_back(nums[i]);
        }
    }

    return result;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}) , {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}