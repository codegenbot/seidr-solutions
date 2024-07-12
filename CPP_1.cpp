bool issame(char a, char b) {
    return (a == '(' && b == '(') || (a == ')' && b == ')');
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int start = 0;
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            if (start == 0)
                start = i + 1;
            else if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 2));
                start = 0;
            }
        } else if (start > 0) {
            if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 2));
                start = 0;
            }
        }
    }
    if (start > 0)
        result.push_back(paren_string.substr(start - 1));
    return result;
}