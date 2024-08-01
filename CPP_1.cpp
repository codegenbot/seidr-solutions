#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp = "";
    
    for (char c : paren_string) {
        if (c == '(') {
            temp += c;
        } else if (c == ')') {
            if (temp.size() > 0 && temp.back() == '(') {
                temp.pop_back();
            }
            if (temp.size() > 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }
    
    if (temp.size() > 0) {
        result.push_back(temp);
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