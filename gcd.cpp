```cpp
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;
using std::size_t;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t n = text.length();
    size_t m = target.length();

    for (int i = 0; i <= static_cast<size_t>(n - m); i++) {
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