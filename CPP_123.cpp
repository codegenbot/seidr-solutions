#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    // Test the get_odd_collatz function
    vector<int> test_input = {6, 7, 8};
    vector<vector<int>> expected_results = {{3, 5}, {7, 11, 17}, {}}; // Collatz sequences for 6, 7, 8
    for (size_t i = 0; i < test_input.size(); ++i) {
        vector<int> result = get_odd_collatz(test_input[i]);
        assert(issame(result, expected_results[i]));
    }

    return 0;
}