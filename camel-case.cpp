#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kebabToCamelCase(string str) {
    string result = "";
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    words.push_back(word);
    
    for (int i = 0; i < words.size(); i++) {
        if (i == 0) {
            result += words[i];
        } else {
            result += toupper(words[i][0]) + words[i].substr(1);
        }
    }
    
    return result;
}

int main() {
    string input;
    getline(cin, input);
    
    cout << kebabToCamelCase(input) << endl;
    
    return 0;
}