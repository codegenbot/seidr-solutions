#include <vector>
#include <string>

bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

bool issame(const vector<string>& a, const vector<string>& b) {
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

int total_match(const vector<string>& input, const vector<vector<string>>& matches) {
    int count = 0;
    for (const string& str : input) {
        bool found = false;
        for (const vector<string>& match : matches) {
            if (issame({{str}} , match)) {
                found = true;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}

void get_user_input(vector<vector<string>>& user_input) {
    string temp;
    cout << "Enter strings (enter 'stop' when done): ";
    while (true) {
        cin >> temp;
        if (temp == "stop") break;
        vector<string> str;
        str.push_back(temp);
        user_input.push_back(str);
    }
}

int main() {
    vector<vector<string>> user_input;
    get_user_input(user_input);
    int count = total_match(user_input, {{{"some"}}});
    cout << "Count of matches is: " << count << endl;
    return 0;
}