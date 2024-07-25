#include <vector>
#include <algorithm>
#include <cassert>

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

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

int main() {
    // Test the get_odd_collatz function
    vector<int> test_input = {5, 10, 20, 15};
    vector<vector<int>> expected_outputs = {{5, 7, 9, 15, 27}, {5, 7, 9, 15, 27}, {5, 7, 9, 15, 27}, {5, 7, 9, 15, 27}};

    for (size_t i = 0; i < test_input.size(); ++i) {
        vector<int> result = get_odd_collatz(test_input[i]);
        assert(issame(result, expected_outputs[i]));
    }

    return 0;
}