```
#include <cassert>
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

bool separate_issame(const vector<string>& a, const vector<string>& b) {
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

    while (open_count > 0) {
        current_group += '(';
        open_count--;
    }

    if (open_count > 0) {
        result.push_back(current_group);
    }

    return result;
}

int run_tests() {
    assert(separate_issame(separate_paren_groups("( ) (( ") , {"","",""})));
    return 0;
}