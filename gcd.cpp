```cpp
#include <cstddef>
#include <vector>
#include <string>

using std::vector;
using std::string;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

vector<long unsigned int> indicesOfSubstring(string text, string target) {
    vector<long unsigned int> result;
    long unsigned int n = text.length();
    long unsigned int m = target.length();

    for (long unsigned int i = 0; i <= n - m; i++) {
        if ((text.find(target, i)) != string::npos) { 
            result.push_back(i); 
            i += m; // Increment by the length of the target substring
        }
    }
    return result;
}