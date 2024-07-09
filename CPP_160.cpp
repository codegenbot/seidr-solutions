int main() {
    std::string str = "++7*3+4";
    std::istringstream iss(str);
    
    std::vector<std::pair<char, int>> operators_and_operands;
    std::string token;
    while (std::getline(iss, token, '+')) {
        if (token != "") {
            char op = token[0];
            int operand = std::stoi(token.substr(1));
            operators_and_operands.push_back(std::make_pair(op, operand));
        }
    }
    
    int result = do_algebra(operators_and_operands);
    return 0;
}