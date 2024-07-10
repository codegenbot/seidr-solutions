#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cin >> str;

    std::vector<std::string> all_prefixes(const std::string& str) {
        std::vector<std::string> result;
        for (int i = 1; i <= str.length(); ++i) {
            result.push_back(str.substr(0, i));
        }
        return result;
    }

    std::vector<std::string> prefix_list = all_prefixes(str);
    std::string target_str;
    std::cin >> target_str;

    for (const std::string& s : prefix_list) {
        if (issame(s, target_str)) {
            std::cout << "The prefix is: " << s << std::endl;
        }
    }

    return 0;
}