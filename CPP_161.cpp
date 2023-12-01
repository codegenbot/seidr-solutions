#include <algorithm>

string solve(string s){
    transform(s.begin(), s.end(), s.begin(), [](char c){
        if(isalpha(c)){
            if(islower(c)){
                return toupper(c);
            } else {
                return tolower(c);
            }
        }
        return c;
    });
    reverse(s.begin(), s.end());
    return s;
}