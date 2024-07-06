#include <vector>
#include <string>

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
    int open_count = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    vector<vector<string>> test_cases = {{{"", "()"}, {"()"}}};
    for (auto& case_: test_cases) {
        string actual = "";
        for (const auto& paren_string : case_) {
            actual += "(" + separate_paren_groups(paren_string).at(0) + ")";
        }
        cout << "Expected: ";
        for (const auto& expected_group : case_[1]) {
            cout << "(" + expected_group + ")"; 
        } 
        cout << endl;
        cout << "Actual: " << actual << endl;
    }
    return 0;
}