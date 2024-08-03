vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    string current_group;
    unsigned int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0u) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces == 0u) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    return vec1 == vec2;
}