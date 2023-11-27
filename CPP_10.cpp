#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_palindrome(string str) {
    int n = str.length();
    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-i-1]) {
            return false;
        }
    }
    return true;
}

string make_palindrome(string str){
    int n = str.length();
    string rev = str;
    reverse(rev.begin(), rev.end());
    for(int i = 0; i < n; i++) {
        if(is_palindrome(str.substr(i))) {
            return str + rev.substr(n - i);
        }
    }
    return "";
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}