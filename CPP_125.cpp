#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    
    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    } else {
        int count = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (txt.find(c) != string::npos) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}

int main() {
    // Test cases
    cout << "{";
    for (string word : split_words("Hello world!")) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string word : split_words("Hello,world!")) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string word : split_words("abcdef")) {
        cout << "\"" << word << "\"";
    }
    cout << "}" << endl;
    
    return 0;
}