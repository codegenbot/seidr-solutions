#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int len = str.length();
    for(int i=len-1; i>=0; i--){
        if(is_palindrome(str.substr(0, i+1))){
            return str + string(len-i-1, 'a');
        }
    }
    return str;
}