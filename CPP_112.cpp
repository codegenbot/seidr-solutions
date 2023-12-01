#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c);

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string newString;
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            newString += s[i];
        }
    }
    
    string reversedString = newString;
    reverse(reversedString.begin(), reversedString.end());
    
    result.push_back(newString);
    result.push_back(newString == reversedString ? "True" : "False");
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}