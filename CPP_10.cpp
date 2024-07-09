#include <algorithm>
using namespace std;

string make_palindrome(string str) {
    string prefix = "";
    for (int i = str.length() - 1; i >= 0; --i) {
        if (str.find(str[i]) != string::npos) {
            prefix = str[i] + prefix;
            break;
        }
    }
    return prefix + str + string(reverse(prefix));
}

string reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; --i)
        rev += str[i];
    return rev;
}