#include <iostream>
#include <string>
#include <cassert>

bool is_happy(std::string s){
    if(s.length() < 3) {
        return false;
    }
    
    for(int i = 2; i < s.length(); i++) {
        if(s[i] == s[i-1] || s[i] == s[i-2] || s[i-1] == s[i-2]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert (is_happy("iopaxioi") == false );
    assert (is_happy("abc") == true );
    assert (is_happy("xyx") == false );
    assert (is_happy("xyz") == true );
    
    return 0;
}