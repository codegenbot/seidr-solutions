```cpp
std::string match_parens(vector<std::string> lst) {
    int open = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') open--;
        }
    }
    return open == 0 ? "Yes" : "No";
}