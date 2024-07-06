#include <stdio.h>
#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    
    for(int i = 0; i <= s.length()-3; i++) {
        string sub = s.substr(i, 3);
        unique = true;
        for(char c : sub) {
            for(int j = i; j < i+3; j++) {
                if(s[j] == c) {
                    unique = false;
                    break;
                }
            }
            if(!unique)
                break;
        }
        if(unique)
            return true;
    }
    
    return false;
}