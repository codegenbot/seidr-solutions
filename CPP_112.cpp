#include <iostream>
#include <vector>
#include <string>

std::pair<std::string, bool> reverse_delete(const std::string& str1, const std::string& str2) {
    int count = 0;
    for (char c : str2) {
        size_t pos = str1.find(c);
        while (pos != std::string::npos) {
            str1.erase(pos, 1);
            if (!str1.empty()) {
                pos = str1.find(c);
            } else {
                break;
            }
            count++;
        }
    }
    return {str1, count == str2.length()};
}

bool issame(const std::vector<std::string>& vec, const std::vector<std::string>& expected) {
    if (vec.size() != expected.size()) {
        return false;
    }
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] != expected[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    auto [result, isCorrect] = reverse_delete("mamma", "mia");
    std::vector<std::string> expectedResult = {"", "True"};
    assert(issame({result}, expectedResult));  
    return 0;
}