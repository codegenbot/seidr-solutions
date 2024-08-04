#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(const string& a, const string& b) {
    return (a.size() == b.size() && (a + a).find(b) != string::npos);
}

int main() {
    string a, b;
    cin >> a >> b;
    
    if (cycpattern_check(a, b)) {
        cout << "Patterns match cyclically." << endl;
    } else {
        cout << "Patterns do not match cyclically." << endl;
    }
    
    return 0;
}