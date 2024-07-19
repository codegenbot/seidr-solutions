bool issame(const vector<string> &a, const vector<string> &b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> separate_paren_groups(const string &paren_string) {
    vector<string> groups;
    int count = 0;
    string current_group;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }
    return groups;
}

int main() {
    assert(issame(separate_paren_groups("((a)(b))"), {"(a)", "(b)"}));
    assert(issame(separate_paren_groups("((x)(y)(z))"), {"(x)", "(y)", "(z)"}));
    assert(issame(separate_paren_groups("(a)(b)"), {"(a)(b)"}));
    return 0;
}