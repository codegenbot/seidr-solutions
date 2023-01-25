#include <iostream>
#include <sstream>
#include <string> 
#include <vector> 
#include <algorithm>
using namespace std;

vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<string> tokens = split(line, ' ');
        for (int i = 0; i < tokens.size(); i++) {
            cout << tokens[i] << endl;
        }
    }
    return 0;
}
