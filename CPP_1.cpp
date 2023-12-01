#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    // Compare the sizes of the vectors first
    if (a.size() != b.size()) {
        return false;
    }

    // Compare each string in the vectors one by one
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

int main() {
    // code here
    return 0;
}