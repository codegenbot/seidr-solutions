bool issame(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;
    vector<string> groups = separate_paren_groups(input);

    for (string group : groups) {
        string first_part = group.substr(0, group.size() / 2);
        string second_part = group.substr(group.size() / 2);
        if (issame(first_part, second_part)) {
            cout << group << " has the property.\n";
        } else {
            cout << group << " does not have the property.\n";
        }
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}