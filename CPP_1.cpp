vector<string> separate_paren_groups(string paren_string);

bool issame(vector<int> a, vector<int> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<string> result = separate_paren_groups("((group1)(group2))");
    assert(issame(result, {"(group1)", "(group2)"}));
    return 0;
}