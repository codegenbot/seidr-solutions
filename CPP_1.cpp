#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    for (const auto& group : groups) {
        cout << group << endl;
    }

    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    // Implementation of issame function
}

vector<string> separate_paren_groups(string paren_string) {
    // Implementation of separate_paren_groups function
}