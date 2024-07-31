#include <vector>
#include <string>

bool is_same(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

int main() {
    std::vector<std::string> result = separate_paren_groups("abc(def)ghi(jkl)mno");
    for (const std::string& group : result) {
        std::cout << group << std::endl;
    }
    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    bool in_group = false;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (in_group) {
                result.push_back(current_group);
                current_group = "";
            }
            in_group = true;
        } else if (ch == ')') {
            in_group = false;
            result.push_back(current_group);
            current_group = "";
        } else if (in_group) {
            current_group += ch;
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}