#include <initializer_list>
#include <algorithm>
#include <vector>
#include <utility>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> order_by_points(initializer_list<int> nums) {
    vector<pair<int, int>> pairs;
    for (int num : nums) {
        int sumOfDigits = 0;
        int n = abs(num);
        while (n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        pairs.push_back({num, sumOfDigits});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        if (!binary_search(result.begin(), result.end(), pair.first)) {
            result.push_back(pair.first);
        }
    }

    return result;
}