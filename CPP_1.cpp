```
#include <vector>
#include <string>

bool operator==(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<std::string> separate_groups(std::string paren_string) {
    std::vector<std::string> result;
    int open_count = 0;
    std::string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int separate_groups_main() {
    assert(separate_groups("( ) (( )) (( )( ") == std::vector<std::string>({{"()", "()", "()"}}));
    return 0;
}