#include <string>

bool cycpattern_check(const string& a, const string& b) {
    if(a.length() != b.length()) return false;
    string temp = a + a;
    return temp.find(b) != string::npos;
}

int main() {
    // Test cases
    cout << cycpattern_check("abc", "bca") << endl;  // Output: 1 (true)
    cout << cycpattern_check("hello", "world") << endl;  // Output: 0 (false)

    return 0;
}