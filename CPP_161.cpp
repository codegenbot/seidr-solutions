#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string solve(string s);

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}

string solve(string s){
    int n = s.size();
    bool hasLetter = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            hasLetter = true;
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }
    if(!hasLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}