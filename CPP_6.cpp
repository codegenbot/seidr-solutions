std::vector<int> parse_nested_parens(const std::string& s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        result.push_back(count);
    }
    return result;
}