#include <iostream>
#include <vector>

std::vector<int> parse_nested_parens(std::string paren_string);
bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> depths;
    int max_depth = 0;
    int curr_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            curr_depth++;
            max_depth = std::max(max_depth, curr_depth);
        } else if (c == ')') {
            curr_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            curr_depth = 0;
        }
    }

    depths.push_back(max_depth);

    return depths;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<int> result = parse_nested_parens(input);
    for (int depth : result) {
        std::cout << depth << " ";
    }
    return 0;
}