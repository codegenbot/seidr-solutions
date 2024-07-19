bool issame(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(' || c == '[' || c == '{') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')' || c == ']' || c == '}') {
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