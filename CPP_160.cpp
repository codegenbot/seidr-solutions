```cpp
int main() {
    std::string str = "++7*3+4";
    std::istringstream iss(str);
    
    std::vector<std::pair<char, int>> operators_and_operands;
    std::string token;
    while (std::getline(iss, token, '+')) {
        if (!token.empty()) {
            char op;
            int operand;
            if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') {
                op = token[0];
                operand = std::stoi(token.substr(1));
            } else {
                op = '^';
                operand = std::stoi(token);
            }
            operators_and_operands.push_back({op, operand});
        }
    }
    
    int result = do_algebra(operators_and_operands);
    return 0;
}