#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int count = 0;

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            count++;
            current_group += paren_string[i];
        } else if (paren_string[i] == ')') {
            count--;
            current_group += paren_string[i];

            if (count == 0) {
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

    for (auto str : output) {
        cout << str << endl;
    }

    return 0;
}