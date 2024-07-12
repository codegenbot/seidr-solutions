#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            level++;
            current_group += c;
        } else if (c == ')') {
            level--;
            current_group += c;
            if (level == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    string input = "( ) (( )) (( )( ))";
    vector<string> output = separate_paren_groups(input);

    for (string s : output) {
        cout << s << endl;
    }

    return 0;
}