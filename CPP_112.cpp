```cpp
#include <vector>
#include <set>
#include <string>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;

    std::set<char> c_set(c.begin(), c.end());

    std::string temp = "";
    for (char ch : s) {
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }

    bool is_palindrome = true;
    int i = 0, length = temp.length();
    while (i < length / 2) {
        if (temp[i] != temp[length - i - 1]) {
            is_palindrome = false;
            break;
        }
        i++;
    }

    result.push_back(temp);
    result.push_back((is_palindrome) ? "True" : "False");

    return result;
}