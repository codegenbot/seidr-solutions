#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string reverseTemp = temp;
    reverse(reverseTemp.begin(), reverseTemp.end());
    result.push_back(to_string(issame({temp}, {reverseTemp})));
    return result;
}

int main() {
    string s, c;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter a character to delete: ";
    cin >> c;
    vector<string> output = reverse_delete(s,c);
    for(auto str : output){
        cout << str << endl;
    }
    return 0;
}