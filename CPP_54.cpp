#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

bool same_chars(const string& s0, const string &s1) {
    string str0 = s0, str1 = s1;
    sort(str0.begin(), str0.end());
    sort(str1.begin(), str1.end());
    return str0 == str1;
}