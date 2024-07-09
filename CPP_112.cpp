```
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
    
    if (palindromCheck == temp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    for(int i=0; i<s.length(); i++) {
        bool found = false;
        for(int j=0; j<c.length(); j++) {
            if(s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            result.push_back(string(1, s[i]));
        }
    }
    
    string temp2 = "";
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp2 += s[i];
        }
    }
    
    string palindromCheck2 = temp2;
    reverse(palindromCheck2.begin(), palindromCheck2.end());
    
    if (palindromCheck2 == temp2) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}