vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

#include "header_file_with_separate_paren_groups_declaration"

int main() {
    // Sample code to test the functions
    vector<string> input1 = separate_paren_groups("((ab)(cd))");
    vector<string> input2 = separate_paren_groups("((ab)(cd))");

    bool result = issame(input1, input2);
    cout << "Are the two vector<string> same? " << (result ? "Yes" : "No") << endl;

    return 0;
}