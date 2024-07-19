bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    return vec1 == vec2;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cin >> input;

    vector<string> result = separate_paren_groups(input);

    for (const string& group : result) {
        cout << group << endl;
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}