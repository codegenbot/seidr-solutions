#include <iostream>
#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int lenA = a.length();
    int lenB = b.length();

    if (lenA < lenB) {
        return false;
    }
    
    string temp = b + b;
    
    if (temp.find(a) != string::npos) {
        return true;
    }

    for (int i = 1; i < lenB; i++) {
        string rotation = b.substr(i) + b.substr(0, i);
        temp = rotation + rotation;
        
        if (temp.find(a) != string::npos) {
            return true;
        }
    }
    
    return false;
}

int main() {
    // Test the function
    cout << cycpattern_check("abcd", "abd") << endl;     // false
    cout << cycpattern_check("hello", "ell") << endl;    // true
    cout << cycpattern_check("whassup", "psus") << endl; // false
    cout << cycpattern_check("abab", "baa") << endl;     // true
    cout << cycpattern_check("efef", "eeff") << endl;    // false
    cout << cycpattern_check("himenss", "simen") << endl;// true
    
    return 0;
}