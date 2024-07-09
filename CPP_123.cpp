#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
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
    // Example usage
    vector<int> test1 = get_odd_collatz(10);
    vector<int> test1_expected = {1, 3, 5, 7, 9, 10};
    assert(issame(test1, test1_expected));

    vector<int> test2 = get_odd_collatz(20);
    vector<int> test2_expected = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 20};
    assert(issame(test2, test2_expected));

    return 0;
}