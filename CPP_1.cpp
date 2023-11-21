#include <iostream>
#include <vector>
using namespace std;

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cin >> input;
    vector<string> result = separate_paren_groups(input);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(current_group + c);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }
    return result;
}