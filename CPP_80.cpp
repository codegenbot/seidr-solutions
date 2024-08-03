#include <cassert>

bool is_happy(const std::string& s) {
    if(s.length() < 3) {
        return false;
    }
    
    for(int i = 0; i < s.length() - 2; i++) {
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(is_happy("abcde"));
    assert(!is_happy("hello"));
    assert(is_happy("coding"));
    assert(!is_happy("good"));
    
    return 0;
}