#include <vector>
#include <algorithm>

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
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
    // Main function can be added here for testing or calling get_odd_collatz function.
    return 0;
}