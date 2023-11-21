#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

int main() {
    assert(std::is_permutation(separate_paren_groups("( ) (( )) (( )( ))").begin(), separate_paren_groups("( ) (( )) (( )( ))").end(), vector<string>{"()", "(())", "(()())"}.begin()));

    cout << "Test cases passed successfully!" << endl;

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        }
        else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}