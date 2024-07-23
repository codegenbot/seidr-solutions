std::string match_parens(std::vector<std::string> lst) {
    int open = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') open--;
            if (open < 0) return "No";
        }
    }
    return open == 0 ? "Yes" : "No";
}