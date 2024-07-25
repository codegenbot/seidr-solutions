#include <iostream>
#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

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
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
            }
            current_group = "(";
        } else if (c == ')') {
            current_group += ')';
            result.push_back(current_group);
            current_group = "";
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    // Test the separate_paren_groups function
    vector<string> test_input = {"(a(b)c)", "(d(e)f)", "(g(h)i)"};
    vector<string> expected_output = {"(a(b)c)", "(d(e)f)", "(g(h)i)"};

    vector<string> result = separate_paren_groups(test_input[0]);

    if (issame(result, expected_output)) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}