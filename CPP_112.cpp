#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    {
        return a == b;
    }
}

string result = "";
for(char ch : s){
    if(c.find(ch) == string::npos){
        result += ch;
    }
}
string rev = result;
reverse(rev.begin(), rev.end());
return {result, result == rev ? "True" : "False"};