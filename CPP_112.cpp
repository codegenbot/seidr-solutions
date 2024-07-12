#include <string>

bool issame(pair<string, string> a, pair<string, string> b) {
    string s = a.first + b.first;
    string c = a.second + b.second;
    
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}