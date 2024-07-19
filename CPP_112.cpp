#include <vector>
#include <string>

bool issame(char ch1, char ch2) {
    if (ch1 == tolower(ch1) && ch2 == tolower(ch2)) {
        return true;
    }
    return false;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (issame(ch, cc)) {
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
    if (temp == reverse(temp)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

std::string reverse(std::string s) {
    std::string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}