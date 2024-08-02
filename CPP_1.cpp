#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            current += c;
        } else if (c == ')') {
            count--;
            current += c;
            if (count == 0) {
                result.push_back(current);
                current = "";
            }
        }
    }

    return result;
}

int main() {
    string paren_string = "( ) (( )) (( )( ))";
    vector<string> groups = separate_paren_groups(paren_string);

    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}