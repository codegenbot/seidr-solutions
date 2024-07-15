bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }
    
    return groups;
}

int main() {
    string input_string;
    cin >> input_string;

    vector<string> result = separate_paren_groups(input_string);

    // Code to use result vector here

    return 0;
}