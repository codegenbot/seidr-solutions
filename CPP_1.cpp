#include <vector>
#include <string>

int test_main();

bool issame(const std::vector<std::string>&, const std::vector<std::string>&);

std::vector<std::string> separate_paren_groups(std::string);

int test_main() {
    std::string s = "((()))(())";
    std::vector<std::string> result = separate_paren_groups(s);
    for (const auto& group : result) {
        if (issame({group}, {s}) && s.find(group) == 0) {
            std::cout << group << "\n";
        }
    }
    return 0;
}

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return std::includes(v1.begin(), v1.end(), v2.begin(), v2.end());
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}