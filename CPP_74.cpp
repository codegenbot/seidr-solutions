#include <vector>
#include <string>

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

int total_match(vector<string> input, vector<string> matches) {
    int count = 0;
    for (const string& str : input) {
        if (find(matches.begin(), matches.end(), str) != matches.end()) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> user_input;
    get_user_input(user_input);
    if (issame(vector<string>(1), user_input)) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "Error: The two lists are not the same." << endl;
    }
    return 0;
}