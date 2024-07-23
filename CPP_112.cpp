#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>
using namespace std;
typedef size_t initializer_list::size_type;

bool issame(const vector<string>& a, const vector<string>& chars) {
    return a == chars;
}

vector<string> reverse_delete(string s, string chars) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(chars.begin(), chars.end(), s[i]) == chars.end()) {
            temp += s[i];
        }
    }
    if (temp == string(temp).reverse()) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    return result;
}

string reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}