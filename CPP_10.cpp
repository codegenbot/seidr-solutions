#include <string>
#include <cassert>
using namespace std;

string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.length();
    int i = n-1;
    while(i >= 0 && str[i] == str[n-1]) i--;
    
    string prefix = str.substr(0, i+1);
    string suffix = str.substr(i+1);
    
    string palindrome = str + string(prefix.rbegin(), prefix.rend()) + suffix;
    return palindrome;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}