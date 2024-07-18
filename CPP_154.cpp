#include <string>

bool cycpattern_check(string a, string b) {
    string combined = a + a;
    return combined.find(b) != string::npos;
}