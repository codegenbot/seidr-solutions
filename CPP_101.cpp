#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[0] != a[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(std::string s, std::vector<std::string> expected) {
    std::vector<std::string> result = {};
    for (int i = 0; i < s.size(); i++) {
        std::string temp = "";
        while (i < s.size() && s[i] != ' ') {
            temp += s[i];
            i++;
        }
        if (!temp.empty()) {
            if (!issame({{temp}}) || !std::count(expected.begin(), expected.end(), temp)) {
                return {};
            }
            result.push_back(temp);
        }
    }
    if (result.empty()) {
        return {s};
    }
    return result;
}

int main() {
    std::string s = "hello hello world hello";
    std::vector<std::string> expected = {"hello"};
    std::cout << "[ ";
    for (const auto& word : words_string(s, expected)) {
        std::cout << "'" << word << "' ";
    }
    std::cout << "]\n";
}