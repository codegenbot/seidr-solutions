bool issame(const string& str) {
    return count(str.begin(), str.end(), str[0]) == str.size();
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    assert(issame("aaa") == true);
    assert(issame("abc") == false);
    assert(issame("1111") == true);
    assert(issame("") == true);
    assert(issame("a") == true);
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