#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> reverse_delete(string s, string c);

int main(){
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}

vector<string> reverse_delete(string s, string c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result.push_back(ch);
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}