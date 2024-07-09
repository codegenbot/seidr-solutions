#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c);

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string result_reversed = result;
    reverse(result_reversed.begin(), result_reversed.end());
    return {result, issame({result, result_reversed}, {result, result_reversed}) ? "True" : "False"};
}