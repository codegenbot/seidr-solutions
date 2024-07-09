#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            temp += c;
        } else if (c == ')') {
            count--;
            temp += c;
            if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }

    return result;
}

int main() {
    string paren_string = "( ) (( )) (( )( ))";
    vector<string> result = separate_paren_groups(paren_string);

    for (string s : result) {
        cout << s << endl;
    }

    return 0;
}