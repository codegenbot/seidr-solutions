#include <string>

bool cycpattern_check(const string& a, const string& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    string combined = a + a;
    
    return combined.find(b) != string::npos;
}