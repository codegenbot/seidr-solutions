#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    string original = a[0];
    string result = "";
    for(char ch : original){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    original = result;
    reverse(result.begin(), result.end());
    return {original, issame(original, result) ? "True" : "False"};
}