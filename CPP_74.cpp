#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
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

void get_user_input(vector<string>& user_input) {
    string line;
    getline(cin, line);
    user_input = split(line, ' ');
}

vector<string> split(const string& str, char delimeter) {
    vector<string> result;
    string temp;
    for (char c : str) {
        if (c == delimeter) {
            result.push_back(temp);
            temp.clear();
        } else {
            temp += c;
        }
    }
    result.push_back(temp);
    return result;

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