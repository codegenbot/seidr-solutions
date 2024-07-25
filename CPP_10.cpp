#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str);
    for(int i=0;i<s.length()/2;++i)
        if(s[i]!=s[s.length()-1-i])
            return false;
    return true;
}

string make_palindrome(string str){
    if(is_palindrome(str))return str;
    for(int i=str.length();i>0;--i)
        if(!is_palindrome(str.substr(0,i)+str.substr(i)))
            return str+string(str.substr(0,(i-1)/2)).reverse()+str.substr((i-1)/2);
}

int main() {
    assert (make_palindrome("jerry") == "jerryyerri");
    return 0;
}