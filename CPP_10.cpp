#include <string>
using namespace std;

bool is_palindrome(std::string str){
    std::string s(str.rbegin(),str.rend());
    return s==str;
}

std::string make_palindrome(std::string str){
    if(is_palindrome(str))return str;
    for(int i=str.length()-1;i>=0;--i)
        if(!is_palindrome(str.substr(0,i)+str.substr(i)))
            return str+std::string(str.substr(0,i))+std::string(str.substr(i)).reverse();