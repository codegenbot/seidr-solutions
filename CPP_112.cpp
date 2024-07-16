```
#include <algorithm>
#include <string>
#include <vector>
#include <initializer_list>
#include <memory>
#include <memory_resource>
#include <ostream>
#include <iostream>

using namespace std;

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
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    string s, c;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the character to be deleted: ";
    cin >> c;
    vector<string> result = reverse_delete(s, c);
    if (isSame({s}, result)) {
        cout << "The original string is the same as the reversed and deleted string." << endl;
    } else {
        cout << "The original string is not the same as the reversed and deleted string." << std::endl;
    }
    return 0;
}