bool issame(const string& str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '(') {
            open++;
        } else if (c == ')') {
            close++;
        }
    }
    return open == close;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cout << "Enter the string with parentheses: ";
    cin >> input;

    vector<string> result = separate_paren_groups(input);

    cout << "Separated groups:" << endl;
    for (const string& group : result) {
        cout << group << endl;
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
            }
            if (balance == 0 && issame(current_group)) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}