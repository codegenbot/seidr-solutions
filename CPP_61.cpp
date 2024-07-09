bool correct_bracketing(const std::string& s) {
    std::stack<char> brackets;
    for (char c : s) {
        if (c == '(') {
            brackets.push(c);
        } else if (c == ')') {
            if (brackets.empty()) return false; 
            brackets.pop();
        }
    }
    return brackets.empty();
}