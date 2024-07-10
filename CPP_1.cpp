bool issame(const string& str1, const string& str2) {
    return str1 == str2;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    assert(issame("hello", "hello"));
    assert(!issame("hello", "world"));
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
            if (balance == 0) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}