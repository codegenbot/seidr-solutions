#include <bits/stdc++.h>

using namespace std;

std::string solve(std::string str){
    std::string result = "";
    for(int i = 0; i < str.length(); i++){
        if(isalpha(str[i])){
            char c = (islower(str[i])) ? toupper(str[i]) : tolower(str[i]);
            result += c;
        } else {
            result += str[i];
        }
    }
    return (result.find_first_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos) ? std::string(result.rbegin(), result.rend()) : result;
}