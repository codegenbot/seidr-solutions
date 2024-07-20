bool check(vector<string>& vec) {
    int open = 0, close = 0;
    for (auto& str : vec) {
        for (char c : str) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close && (open % 2 == 1 || close % 2 == 1);
}

string match_parens(vector<string> lst) {
    if (check({lst[0], lst[1]})) return "Yes";
    return "No";
}