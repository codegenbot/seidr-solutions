bool issame(int a, int b);  // Function prototype

vector<string> separate_paren_groups(string paren_string);  // Function prototype

bool issame(int a, int b) {
    return a == b;
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
    vector<string> test_output = separate_paren_groups("(hello) (world)");
    vector<string> expected_output = {"hello", "world"};
  
    assert(test_output == expected_output);

    return 0;
}