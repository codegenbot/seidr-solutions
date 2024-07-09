#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    
    return 0;
}