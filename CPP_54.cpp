#include <cassert>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool same_chars(string s0, string s1) {
    if(s0.size() != s1.size()) {
        return false;
    }
    for(int i = 0; i < s0.size(); i++) {
        if(std::count(s0.begin(), s0.end(), s1[i]) != 1) {
            return false;
        }
    }
    return s0 == s1;
}

int main() {
    cout << (same_chars("aabb", "aaccc") ? "True" : "False");
    return 0;
}