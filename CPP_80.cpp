#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool is_happy(string s);

bool is_happy(string s){
    if (s.length() < 3) return false;
    for (int i = 0; i <= s.length() - 3; i++){
        if (s[i] == s[i + 1] || s[i] == s[i + 2] || s[i + 1] == s[i + 2]){
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    return 0;
}