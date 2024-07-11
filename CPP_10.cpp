#include <string>
#include <algorithm>

std::string make_palindrome(std::string str){
    int n = str.length();
    std::string rev_str = str;
    std::reverse(rev_str.begin(), rev_str.end());
    for(int i=0; i<n; i++){
        if(str.substr(0, n-i) == rev_str.substr(i)){
            return str + rev_str.substr(0, i);
        }
    }
    return "";
}