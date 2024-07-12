```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int start = 0;
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            if (start == 0)
                start = i + 1;
            else if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 2));
                start = 0;
            }
        } else if (start > 0) {
            if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 1));
                start = 0;
            }
        }
    }
    if (start > 0)
        result.push_back(paren_string.substr(start - 1));
    return result;
}

int main() {
    string paren_string;
    cin >> paren_string;
    vector<string> separate_paren = separate_paren_groups(paren_string);
    // You could do something with separate_paren here
    return 0;
}