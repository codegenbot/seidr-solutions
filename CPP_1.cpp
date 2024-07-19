#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    int count = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count >= 0) {
                current_group += c;
            }
            if (count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    vector<string> expected_result = {"()", "(())", "(()())"};
    assert(separate_paren_groups("( ) (( )) (( )( ))") == expected_result);

    return 0;
}