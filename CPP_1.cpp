bool issame(string s) {
    int count = 0;
    for(char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
    }
    return count == 0;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input_string;
    cout << "Enter a string of parentheses:";
    cin >> input_string;

    vector<string> groups = separate_paren_groups(input_string);

    cout << "Separated groups:" << endl;
    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}

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
            if (open_count == 0 && issame(current_group)) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}