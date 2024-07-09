```c
#include <vector>
#include <string>

int main() {
    std::string s = "((hello), (world))";
    std::vector<std::string> result = separate_paren_groups(s);
    
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    
    return 0;
}

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> result;
    std::string group;

    for (char c : s) {
        if (c == '(') {
            group += c;
        } else if (c == ')') {
            group += c;
            result.push_back(group);
            group.clear();
        }
    }

    return result;
}