#include <vector>
#include <string>

bool compare_vectors(vector<int> a, vector<int> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '{') {
            if (!current_group.empty()) {
                result.push_back(current_group);
            }
            current_group = "{";
        } else if (c == '}') {
            current_group += "}";
            result.push_back(current_group);
            current_group = "";
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}