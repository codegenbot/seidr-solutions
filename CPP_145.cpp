#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool same(vector<pair<int, int>> a, vector<pair<int, int>> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> order_by_points(vector<int> nums) {
    vector<tuple<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(get<1>(pair));
    }

    return result;
}

int main() {
    assert(same(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}