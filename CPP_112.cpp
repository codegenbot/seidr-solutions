#include <string>

bool issame(string a, string b){
    return a == b;
}

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    return {result, issame(result, result_reverse) ? "True" : "False"};
}