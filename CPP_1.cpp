#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }

        group += c;

        if (count == 0 && group != "") {
            groups.push_back(group);
            group = "";
        }
    }

    return groups;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> result = separate_paren_groups(input);

    for (string group : result) {
        cout << group << endl;
    }

    return 0;
}