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
    vector<string> input = separate_paren_groups("((ab)(cd))");
    vector<string> expected = {"(ab)", "(cd)"};

    assert(is_same(input, expected));

    return 0;
}

bool is_same(vector<string> a, vector<string> b) {
    // Implementation code here
}