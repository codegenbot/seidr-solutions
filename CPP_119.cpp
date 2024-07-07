```c++
std::string match_parens(std::initializer_list<std::string> lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        if (s == "(") open++;
        else if (s == ")") close++;
    }
    return (open == close) ? "Yes" : "No";
}