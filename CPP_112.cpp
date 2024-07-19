```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::string reverse(std::string s) {
    std::string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(std::to_string(ch));
        }
    }
    std::string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    std::string rev = reverse(temp);
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}