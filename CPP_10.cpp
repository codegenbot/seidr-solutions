#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str;
    for(int i=str.size()-1; i>=0; --i)
        if(!is_palindrome(str.substr(0, i+1)))
            break;
    return str + string(str.rbegin(), str.rend());
}