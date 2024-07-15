#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool cycpattern_check(string a, string b) {
    string s = a + a;
    return s.find(b) != string::npos;
}