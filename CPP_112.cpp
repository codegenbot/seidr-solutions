#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
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
    vector<string> result = reverse_delete(s, c);
    cout << result[0] << endl;
    cout << result[1] << endl;
    
    return 0;
}