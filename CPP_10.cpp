#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    if (is_palindrome(str)) {
        return str;
    }
    
    int i = 0;
    while (i < str.length() && !is_palindrome(str.substr(i))) {
        i++;
    }
    
    string prefix = str.substr(0, i);
    string suffix = str.substr(i);
    reverse(suffix.begin(), suffix.end());
    
    return prefix + suffix;
}