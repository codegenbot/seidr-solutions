#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str))
        return str;
    
    for(int len=str.length();len>0;--len){
        if(is_palindrome(str.substr(0,len))){
            return str+string(str.rbegin(),str.rbegin()+len).rbegin();
        }
    }
    return str+str;
}