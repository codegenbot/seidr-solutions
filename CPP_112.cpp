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

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
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
    result.push_back(temp);
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((is_palindrome(temp)) ? "True" : "False");
    return result;
}