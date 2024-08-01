#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> reverse_delete(const string& s, const string& c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }

    string reversed = result;
    reverse(reversed.begin(), reversed.end());

    return {result, issame(result, reversed) ? "True" : "False"};
}