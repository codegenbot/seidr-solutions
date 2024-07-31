#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool same_chars(const string& s0, const string& s1) {
    string str1 = string(s0);
    string str2 = string(s1);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    
    return 0;
}