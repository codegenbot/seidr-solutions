#include <vector>
#include <string>

using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    string temp = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else {
            temp += s[i];
        }
    }
    
    if (!temp.empty()) {
        result.push_back(temp);
    }
    
    return result;
}