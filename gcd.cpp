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

vector<size_t> indicesOfSubstring(string text, string target) {
    vector<size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if ((text.find(target, i)) != string::npos) { 
            result.push_back(i); 
            i += m; // Increment by the length of the target substring
        }
    }

    return result;