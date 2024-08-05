#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b);

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    return {result, (result == reverse_result) ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia") , {"amm", "False"}));
    return 0;
}