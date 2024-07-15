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

int main() {
    vector<string> expectedResult = {"()", "(())", "(()())"};
    assert(separate_paren_groups("( ) (( )) (( )( ))") == expectedResult);
    
    return 0;
}