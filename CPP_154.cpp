#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool cycpattern_check(string a, string b) {
    if(a.length() != b.length()) return false;
    string temp = a + a;
    return temp.find(b) != string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    // Add more test cases here if needed
    return 0;
}