#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c);

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
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    
    return {result, result == reversed ? "True" : "False"};
}

int main() {
    string s, c;
    cin >> s >> c;
    
    vector<string> output = reverse_delete(s, c);
    cout << output[0] << endl;
    cout << output[1] << endl;

    return 0;
}