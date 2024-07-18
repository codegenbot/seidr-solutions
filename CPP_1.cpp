bool issame(const string& str) {
    char first_char = str[0];
    for (char c : str) {
        if (c != first_char) {
            return false;
        }
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
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
            }
            if (count == 0) {
                if (issame(current_group)) {
                    result.push_back(current_group);
                }
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    string paren_string;
    cin >> paren_string;

    vector<string> res = separate_paren_groups(paren_string);

    for (const string& group : res) {
        cout << group << endl;
    }

    return 0;
}