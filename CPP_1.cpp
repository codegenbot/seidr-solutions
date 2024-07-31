#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool compare_vectors(vector<string> a, vector<string> b) {
    return a == b;
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
            current_group += ")";
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
    vector<string> input_groups = separate_paren_groups("()(()())");
    vector<string> expected_output = {"()", "()", "()", "()"};

    assert(compare_vectors(input_groups, expected_output));

    return 0;
}