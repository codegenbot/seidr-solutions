#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> split(const string& str, char ch) {
    vector<string> tokens;
    string token;
    for (char c : str) {
        if (c == ch)
            tokens.push_back(token), token = "";
        else
            token += c;
    }
    tokens.push_back(token);
    return tokens;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        int pos = text.find(target, i);
        while (pos != string::npos) {
            result.push_back(pos); 
            pos = text.find(target, i+1); // start searching from the next position of previous match
        }
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);
    size_t pos = 0;
    vector<string> tokens = split(input, ' ');
    string text = tokens[0];
    string target = tokens[1];

    vector<int> results = indicesOfSubstring(text, target);
    for (int i : results) {
        cout << i << " ";
    }
    return 0;
}