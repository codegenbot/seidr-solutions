#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split(string input, char sep) {
    size_t pos = 0;
    vector<string> tokens;
    while ((pos = input.find(sep)) != string::npos) {
        tokens.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    tokens.push_back(input);
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
    cin >> input;
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