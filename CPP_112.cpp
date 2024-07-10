#include <vector>
bool issame(string s1, string s2);

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, issame(result, reversed) ? "True" : "False"};
}

bool issame(string s1, string s2){
    return s1 == s2;
}