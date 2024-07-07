#include <algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    for(int i=str.length()-1; i>=0; --i){
        if(is_palindrome(str.substr(0, i+1))){
            return str + string(str.rbegin(), str.rend()).substr(i);
        }
    }
    return str + string(str.rbegin(), str.end());
}