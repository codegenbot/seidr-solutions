#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string resultReverse = result;
    reverse(resultReverse.begin(), resultReverse.end());
    return {result,  issame({result, resultReverse}, {result, resultReverse}) ? "True" : "False"};
}