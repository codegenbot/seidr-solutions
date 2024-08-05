#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(pair<string, string> result){
    return result.first == result.second;
}

pair<string, string> solve(const string& s, const string& c){
string result = "";
for(char ch : s){
if (c.find(ch) == string::npos){
result += ch;
}
}
string result_reverse = result;
reverse(result_reverse.begin(), result_reverse.end());
return {result, issame({result, result_reverse}) ? "True" : "False"};
}