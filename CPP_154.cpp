
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(const string& a, const string& b) {
    int n = a.length();
    int m = b.length();
    if(n != m) return false;
    
    string temp = b + b;
    
    if(temp.find(a) != string::npos) return true;
    
    for(int i = 1; i < m; ++i){
        temp = temp.substr(1) + temp[0];
        if(temp.find(a) != string::npos) return true;
    }
    
    return false;
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true);
    
    return 0;
}