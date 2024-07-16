#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

bool is_palindrome(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    return (temp == s);
}

pair<string, string> reverse_delete(string s, string c) {
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
    return {temp, (is_palindrome(temp)) ? "True" : "False"};
}

int main() {
    pair<string, string> results = reverse_delete("mamma", "mia");
    cout << "First part of the output: " << results.first << endl;
    cout << "Second part of the output: " << results.second << endl;
    return 0;
}