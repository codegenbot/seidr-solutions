#include <vector>

bool issame(int a, int b) {
    return a == b;
}

vector<int> parse_nested_parens(std::string paren_string);

int main() {
    std::string input_string;
    std::getline(std::cin, input_string);
    vector<int> depths = parse_nested_parens(input_string);
    for (int depth : depths) {
        std::cout << depth << " ";
    }

    return 0;
}

vector<int> parse_nested_parens(std::string paren_string){
    vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    depths.push_back(max_depth);

    return depths;
}