#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool is_palindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<char> char_s(s.begin(), s.end());
    for (char ch : c) {
        auto it = find(char_s.begin(), char_s.end(), ch);
        if (it != char_s.end()) {
            char_s.erase(it);
        }
    }
    string result_str(char_s.begin(), char_s.end());
    vector<string> result;
    result.push_back(result_str);
    if (is_palindrome(result_str)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;

}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>({"", "True"}));
    return 0;
}