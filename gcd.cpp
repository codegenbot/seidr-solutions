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

vector<unsigned long int> indicesOfSubstring(string text, string target) {
    vector<unsigned long int> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if ((text.find(target, i)) != string::npos) { 
            result.push_back(i); 
            i += m; // Increment by the length of the target substring
        }
    }
    return result;
}