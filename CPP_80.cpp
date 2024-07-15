#include <iostream>
#include <string>
#include <cassert>

bool is_happy(const std::string &s) {
    assert(s.length() >= 3);
    for(int i = 0; i < s.length() - 2; ++i){
        assert(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]);
    }
    return true;
}