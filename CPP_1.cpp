void separate_paren_groups(string paren_string);

bool issame(vector<string> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> b) {
    assert(!b.empty());
    string s1 = b[0];
    for (const string &s2 : b) {
        if (s1 != s2) {
            return false;
        }
    }
    return true;
}