#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
vector<string> splitString(const string& s, const string& delimiter) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    if (!s.empty()) {
        result.push_back(s);
    }
    return result;
}
void convertToCamelCase(string& input) {
    vector<string> words = splitString(input, "-");
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            string word = words[i];
            words[i] = word.substr(0, 1).toUpperCase() + word.substr(1);
        }
    }
    input = std::stringstream().str();
    for (int i = 0; i < words.size(); i++) {
        input << " " << words[i];
    }
}
int main() {
    string input;
    getline(cin, input);
    convertToCamelCase(input);
    cout << input << endl;
    return 0;
}