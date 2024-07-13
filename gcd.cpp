```cpp
#include <cstddef>
#include <vector>
#include <string>

using std::size_t;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

std::vector<std::size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<std::size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if ((text.find(target, i)) != std::string::npos) { 
            result.push_back(i); 
            i += m; // Increment by the length of the target substring
        }
    }
    return result;
}