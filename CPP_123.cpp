#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> solve(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 1)
            result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}