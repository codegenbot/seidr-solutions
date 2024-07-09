#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool cycpattern_check(string a, string b) {
    int n = a.size(), m = b.size();
    if (n != m) return false;
    
    string temp = a + a;
    
    return (temp.find(b) != string::npos);
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    return 0;
}