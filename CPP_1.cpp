vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

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
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

int main() {
    string input;
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    // Example usage of issame function
    vector<string> a = {"group1", "group2"};
    vector<string> b = {"group1", "group2"};
    if (issame(a, b)) {
        cout << "Vectors are the same" << endl;
    } else {
        cout << "Vectors are not the same" << endl;
    }

    return 0;
}