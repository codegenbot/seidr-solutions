#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    string s = a[0];
    string c = b[0];
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string original = result;
    reverse(result.begin(), result.end());
    return {original, original == result ? "True" : "False"};
}