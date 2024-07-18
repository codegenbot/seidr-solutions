#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    
    string current_group;
    int balance = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            balance++;
            if (balance == 1) {
                current_group = "(";
            } else {
                current_group += "(";
            }
        } else if (c == ')') {
            balance--;
            current_group += ")";
            if (balance == 0) {
                result.push_back(current_group);
            }
        }
    }
    
    return result;
}

int main() {
    string input_str = "( ) (( )) (( )( ))";
    vector<string> result = separate_paren_groups(input_str);
    
    for (const string& group : result) {
        cout << group << endl;
    }
    
    return 0;
}