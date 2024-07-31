bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group;
    int count = 0;

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
    string input;
    cin >> input;

    vector<string> groups = separate_paren_groups(input);
    vector<string> test_groups = separate_paren_groups(input);

    if (issame(groups, test_groups)) {
        cout << "Groups are the same\n";
    } else {
        cout << "Groups are different\n";
    }

    return 0;
}