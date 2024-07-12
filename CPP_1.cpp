vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int start = 0;
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            start = i;
        } else if (paren_string[i] == ')') {
            string group = paren_string.substr(start, i - start + 1);
            result.push_back(group);
            break;
        }
    }
    return result;
}