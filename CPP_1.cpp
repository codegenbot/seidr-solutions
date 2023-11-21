#include <iostream>
#include <vector>
#include <cassert> // Step 1: Include the <cassert> header

using namespace std;

vector<string> separate_paren_groups(string paren_string);

int main() {
    assert(separate_paren_groups("( ) (( )) (( )( ))") == vector<string>{"()", "(())", "(()())"});

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