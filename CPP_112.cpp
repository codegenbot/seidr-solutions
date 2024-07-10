#include <vector>
#include <algorithm>

bool isSame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
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
            result.push_back(std::string(1, ch));
        }
    }

    std::string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }

    bool is_palindrome = true;
    int left = 0, right = temp.size() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }

    result.push_back(std::to_string(is_palindrome ? 1 : 0));
    return result;
}