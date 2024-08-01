#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    int n = text.length();
    int m = target.length();

    std::vector<int> result;
    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}