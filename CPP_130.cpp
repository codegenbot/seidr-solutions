#include <vector>

vector<int> tri(int n) {
    vector<int> result;
    result.push_back(3); // tri(1) = 3

    if (n > 0) {
        result.push_back(1 + n / 2); // tri(2) = 1 + (2 / 2)
    }

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2); // tri(n) = 1 + n / 2, if n is even
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]); // tri(n) = tri(n - 1) + tri(n - 2) + tri(n + 1), if n is odd
        }
    }

    return result;
}