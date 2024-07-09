#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<char,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;

    for (string word : split(test, ' ')) {
        for (char c : word) {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            maxCount = max(maxCount, result[c]);
        }
    }

    map<char,int> finalResult;

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }

    return finalResult;
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool issame(map<char,int> a, map<char,int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Your test case code here
    string s;
    cout << "Enter the input: ";
    cin >> s;
    map<char, int> result = histogram(s);
    for (auto it = result.begin(); it != result.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}