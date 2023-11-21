bool issame(vector<string> a, vector<string> b) {
    // Compare two vectors of strings for equality
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    // Your existing code implementation
    vector<string> result;
    string current_group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(current_group + c);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}