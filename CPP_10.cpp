#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    int len = str.length();
    for(int i=len-1; i>=0; i--) {
        if(!is_palindrome(str + string(1, str[i])))
            break;
    }
    return str + str.substr(len-i-1);
}