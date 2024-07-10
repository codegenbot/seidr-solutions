#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> reverse_delete(string s, string c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string palindrome_check = result;
    reverse(palindrome_check.begin(), palindrome_check.end());
    return {result, result == palindrome_check ? "True" : "False"};
}

int main(){
    assert (issame(reverse_delete("mamma", "mia") , vector<string>{"", "True"}));
}