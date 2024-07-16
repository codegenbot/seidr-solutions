#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

pair<string, string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string rev = result;
    reverse(rev.begin(), rev.end());
    return {result, result == rev ? "True" : "False"};
}