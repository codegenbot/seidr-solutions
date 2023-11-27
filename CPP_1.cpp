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
bool is_same(vector<string> a, vector<string> b) {
    // Implementation code here
}

int main() {
    vector<string> a = separate_paren_groups("((a)(b))");
    vector<string> b = separate_paren_groups("((a)(b))");

    assert(is_same(a, b));

    return 0;
}