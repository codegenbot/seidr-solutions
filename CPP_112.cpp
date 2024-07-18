#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> reverse_delete(string s, string c);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

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

int main() {
    string s, c;
    cout << "Enter the original string: ";
    cin >> s;
    cout << "Enter the characters to delete: ";
    cin >> c;

    vector<string> result = reverse_delete(s, c);
    for(const auto& str : result){
        cout << str << " ";
    }
    cout << endl;

    return 0;
}