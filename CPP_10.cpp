#include <string>
using namespace std;

bool is_palindrome(string str){
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

string make_palindrome(string str){
    int n = str.size();
    for (int i = n - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}