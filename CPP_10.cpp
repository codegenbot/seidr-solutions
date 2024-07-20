#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string make_palindrome(string str);

int main() {
    assert(make_palindrome("jerry") == "jerryrreyrrej");
    return 0;
}

string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] != str[0]) i--;
    string prefix = str.substr(0, i);
    string palindrome_suffix = str.substr(i);
    string prefix_reverse(prefix.rbegin(), prefix.rend());
    return prefix + str + prefix_reverse;
}