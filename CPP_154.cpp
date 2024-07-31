#include <iostream>
#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    string temp = b + b;
    return (temp.find(a) != string::npos);
}

int main() {
    assert(cycpattern_check("winemtt","tinem") == true);
    return 0;
}