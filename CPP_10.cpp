#include <algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.length()-1;
    while(i>0 && str[i-1]==str[i])
        i--;
    string palin=slice(str, 0, i);
    return str+rev(slice(str, i))+palin;
}

string slice(const string& s, int start, int end) {
    return s.substr(start, end-start);
}

string rev(const string& s) {
    string r;
    for(int i = s.length() - 1; i >= 0; i--) {
        r += s[i];
    }
    return r;
}