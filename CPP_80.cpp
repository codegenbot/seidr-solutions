#include <string>
#include <iostream>
#include <cassert>

using namespace std;

bool is_happy(const string& s) {
    if(s.length() < 3)
        return false;

    for(int i = 0; i < s.length() - 2; ++i){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2] || abs(static_cast<int>(s[i]) - static_cast<int>(s[i+1])) == 1 || abs(static_cast<int>(s[i]) - static_cast<int>(s[i+2])) == 1 || abs(static_cast<int>(s[i+1]) - static_cast<int>(s[i+2])) == 1)
            return false;
    }

    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false );
    
    return 0;
}