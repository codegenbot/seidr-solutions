#include <iostream>
#include <string>
#include <algorithm>

std::string solve(std::string s){
    int n = s.size();
    int count = 0;
    for(int i=0; i<n; i++){
        if(std::isalpha(s[i])){
            s[i] = std::islower(s[i]) ? std::toupper(s[i]) : std::tolower(s[i]);
        } else {
            count++;
        }
    }
    if(count == n){
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main(){
    assert (solve("#ccc") == "#CCC");
    // Add more test cases here
    return 0;
}