bool issame(vector<int> a, vector<int> b);

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<int> a, vector<int> b) {
    // implementation
}

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
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

int main() {
    assert(separate_paren_groups("((hello)(world))") == vector<string>{"(hello)", "(world)"});
    return 0;
}