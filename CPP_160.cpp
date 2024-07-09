```cpp
while (iss >> token) {
    if (!token.empty()) {
        if (op != '+') {
            operators_and_operands.push_back({op, operand});
            op = '+';
            operand = 0;
        }
        if (token[0] == '+') {
            op = '+';
            operand = std::stoi(token.substr(1));
        } else if (token[0] == '-') {
            op = '-';
            operand = std::stoll(token.substr(1));
        } else if (token[0] == '*') {
            op = '*';
            operand = std::stoll(token.substr(1));
        } else if (token[0] == '/') {
            op = '/';
            operand = std::stoll(token.substr(1));
        } else if (token[0] == '^') {
            op = '^';
            operand = std::stoi(token.substr(1));
        }
    }
}
// add the last operator and operand to vector
if (op != '+') {
    operators_and_operands.push_back({op, operand});
}