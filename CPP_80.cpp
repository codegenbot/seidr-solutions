#include<stdio.h>
#include<string>
using namespace std;

bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        bool unique=true;
        for(int j = 0; j<3; j++){
            for(int k = j+1; k<3; k++){
                if(s[i+j] == s[i+k]) {
                    unique=false;break;
                }
            }
            if(!unique) break;
        }
        if(unique) return true;
    }
    return false;
}