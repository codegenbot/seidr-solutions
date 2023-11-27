vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

bool issame(vector<string> a, vector<string> b);

int main() {
    string paren_string;
    cin >> paren_string;

    vector<string> groups = separate_paren_groups(paren_string);

    // Test if the groups are the same
    assert(is_same(groups, groups));

    return 0;
}

bool is_same(vector<string> a, vector<string> b) {
    // Implementation code here
    return a == b;
}