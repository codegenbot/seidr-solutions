#include <string>
using namespace std;

string make_palindrome(string str);

string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    for(int i = 0; i < str.length(); i++){
        if(str.substr(0, i + 1) == rev_str.substr(str.length() - i - 1)){
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}