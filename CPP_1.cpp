#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int open_count = 0, close_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            close_count++;
            current_group += c;
            if (open_count == close_count) {
                result.push_back(current_group);
                current_group = "";
                open_count = 0;
                close_count = 0;
            }
        }
    }

    return result;
}

int main() {
    string input = "( ) (( )) (( )( ))";
    vector<string> output = separate_paren_groups(input);

    for (const auto& s : output) {
        cout << s << endl;
    }

    return 0;
}