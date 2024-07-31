#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_palindrome(string str){
    for(int i=0; i<str.size()/2; ++i){
        if(str[i] != str[str.size()-i-1]){
            return false;
        }
    }
    return true;
}

string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))) {
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return "";
}