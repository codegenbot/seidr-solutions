bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0 && !group.empty()) {
                result.push_back(group);
                group.clear();
            }
        }
    }
    
    return result;
}

int main() {
    string input_string;
    cin >> input_string;
    
    vector<string> groups = separate_paren_groups(input_string);
    
    for (string group : groups) {
        cout << group << " ";
    }
    
    return 0;
}  