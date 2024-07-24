#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str))
        return str;
    
    for(int i=str.length()-1; i>=0; i--){
        if(!is_palindrome(str + string(1, str[i])))
            break;
    }
    return str + string(str.rbegin(),str.rend());
}