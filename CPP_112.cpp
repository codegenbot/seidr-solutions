#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char& ch : s) {
        bool found = false;
        for (char& cch : c) {
            if (ch == cch) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            temp += ch;
        }
    }
    
    string temp2 = temp;
    reverse(temp.begin(), temp.end());
    
    result.push_back(temp2);
    if (temp2 == temp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}