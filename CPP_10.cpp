#include <string>

bool is_palindrome(string str){
    int l = 0;
    int h = str.size() - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
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