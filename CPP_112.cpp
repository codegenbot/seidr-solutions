#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<string> a, std::vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<string> reverse_delete(string s, string c){
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

int main(){
    string s = "hello";
    string c = "l";
    auto res = reverse_delete(s, c);
    for(auto str : res){
        std::cout << str << " ";
    }
    return 0;
}