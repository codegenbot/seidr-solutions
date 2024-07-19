#include <vector>
#include <string>

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
            result.push_back(std::string(1, ch));
        }
    }
    std::string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    if (temp == std::string(reverse(temp))) {
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

bool isSame(const std::vector<std::string>& v) {
    if(v.size() < 2) {
        return false;
    }
    std::string temp = "";
    for (int i = 0; i < v.size(); i++) {
        temp += v[i];
    }
    return temp == std::string(reverse(temp));
}