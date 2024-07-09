#include <string>

std::string make_palindrome(std::string str){
    int n = str.length();
    std::string rev_str = std::string(str.rbegin(), str.rend());
    for(int i=0; i<n; i++){
        if(str.substr(0, n-i) == rev_str.substr(i)){
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}