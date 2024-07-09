#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += s[i];
        }
    }
    
    result.push_back(temp);
    
    string palindromCheck = temp;
    reverse(palindromCheck.begin(), palindromCheck.end());
    
    while (temp.length() > 0) {
        result.push_back(string(1, temp[0]));
        temp.erase(0, 1);
    }
    
    if (palindromCheck == temp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}