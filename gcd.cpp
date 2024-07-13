```cpp
#include <cstddef>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

vector<std::size_t> indicesOfSubstring(string text, string target) {
    vector<std::size_t> result;
    std::size_t n = text.length();
    std::size_t m = target.length();

    for (std::size_t i = 0; i <= n - m; i++) {
        if ((text.find(target, i)) != string::npos) { 
            result.push_back(i); 
            i += m; // Increment by the length of the target substring
        }
    }
    return result;
}