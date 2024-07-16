#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool is_palindrome(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    return (temp == s);
}

std::pair<string, string> reverse_delete(string s, string c) {
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    return make_pair(temp, (is_palindrome(temp)) ? "True" : "False");
}

int main() {
    assert(make_pair("", reverse_delete("mamma", "mia").second) == pair<string, string>("", "True"));
    return 0;
}