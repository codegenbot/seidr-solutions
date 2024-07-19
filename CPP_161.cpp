#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

auto solve = [](string s){
    bool hasLetter = false;
    for(char &c : s){
        if(isalpha(c)){
            hasLetter = true;
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(!hasLetter){
        reverse(s.begin(), s.end());
    }
    return s;
};