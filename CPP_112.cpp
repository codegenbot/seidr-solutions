#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            temp += ch;
        }
    }
    
    string newStr = temp;
    reverse(newStr.begin(), newStr.end());
    
    result.push_back(temp);
    if (temp == newStr) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}