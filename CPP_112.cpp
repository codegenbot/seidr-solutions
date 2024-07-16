#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <initializer_list>

using namespace std;

bool is_palindrome(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    return (temp == s);
}

std::pair<std::string, std::string> reverse_delete(std::string s, std::string c) {
    std::string temp = "";
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
    return {temp, is_palindrome(temp) ? "True" : "False"};
}

int main() {
    assert (std::make_pair("", reverse_delete("mamma", "mia").second) == std::pair<std::string, std::string>("", "True"));
    return 0;
}