#include <iostream>
#include <string>
#include <cassert>

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
    
    return false;
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true);
    
    return 0;
}