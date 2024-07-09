#include <string>
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
    
    string reverse_temp = temp;
    reverse(reverse_temp.begin(), reverse_temp.end());
    
    result.push_back(temp);
    if (temp == reverse_temp)
        result.push_back("True");
    else
        result.push_back("False");
    
    return result;
}