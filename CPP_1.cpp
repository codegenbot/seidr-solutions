#include <cassert>
#include <vector>
#include <string>

using namespace std;

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

vector<string> split(const string& s, const string& delimiter) {
    vector<string> result;
    size_t pos = 0, lastPos = 0;
    while ((pos = s.find(delimiter, lastPos)) != std::string::npos) {
        result.push_back(s.substr(lastPos, pos - lastPos));
        lastPos = pos + delimiter.length();
    }
    result.push_back(s.substr(lastPos));
    return result;
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

int run_tests() {
    string s1 = separate_paren_groups("( ) (( )) (( )( ))");
    vector<string> v1 = vector<string>(split(s1, "))"));
    assert(issame(v1, {"", "(()())",""}));
    return 0;
}