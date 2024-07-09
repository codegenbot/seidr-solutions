```cpp
while (iss >> token) {
    if (!token.empty()) {
        if (!op.empty()) {
            operators_and_operands.push_back({op, operand});
            op = token[0];
            operand = std::stoi(token.substr(1));
        } else {
            op = token[0];
            if (isdigit(token[1])) {
                operand = std::stoi(token.substr(1));
            } else {
                operand = 0;
            }
        }
    }
}
if (!op.empty()) {
    operators_and_operands.push_back({op, operand});
}