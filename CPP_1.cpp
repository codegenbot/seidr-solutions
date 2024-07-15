#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> groups;
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
            }
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

vector<string> combine(const vector<string>& groups) {
    vector<string> result;
    for (const string& group : groups) {
        string combined_group = "(" + group + ")";
        result.push_back(combined_group);
    }
    return result;
}

int main() {
    vector<string> separated_groups = separate_paren_groups("( ) (( )) (( )( ))");
    vector<string> combined_groups = combine(separated_groups);

    assert(combined_groups == vector<string>{"()", "(())", "(()())"});

    return 0;
}