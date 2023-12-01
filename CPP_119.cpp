#include <iostream>
#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst) {
    string result = "Yes";
    int balance = 0;
    
    for (int i = 0; i < lst.size(); i++) {
        string str = lst[i];
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '(') {
                balance++;
            } else {
                balance--;
            }
            
            if (balance < 0) {
                result = "No";
                break;
            }
        }
        
        if (balance < 0) {
            break;
        }
    }
    
    if (balance != 0) {
        result = "No";
    }
    
    return result;
}