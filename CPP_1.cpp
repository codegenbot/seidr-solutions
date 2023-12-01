#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int count = 0;

    for (char ch : paren_string) {
        if (ch == '(') {
            count++;
        } else if (ch == ')') {
            count--;
        }

        if (ch != ' ') {
            current_group += ch;
        }

        if (count == 0 && current_group != "") {
            result.push_back(current_group);
            current_group = "";
        }
    }

    return result;
}

int main() {
    string paren_string = "( ) (( )) (( )( ))";
    vector<string> groups = separate_paren_groups(paren_string);

    for (const string& group : groups) {
        cout << group << endl;
    }

    return 0;
}