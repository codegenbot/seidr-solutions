#include <string>

bool cycpattern_check(const string& a, const string& b) {
    if(a.length() != b.length()) return false;
    string temp = a + a;
    return temp.find(b) != string::npos;
}

int main() {
    // Test cases
    cout << cycpattern_check("abcabc", "abc") << endl; // Should output 1
    cout << cycpattern_check("abcabc", "bca") << endl; // Should output 0

    return 0;
}