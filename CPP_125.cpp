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
    // Test the function
    string txt1 = "Hello world!";
    string txt2 = "Hello,world!";
    string txt3 = "abcdef";
    
    vector<string> result1 = split_words(txt1);
    vector<string> result2 = split_words(txt2);
    vector<string> result3 = split_words(txt3);
    
    for (string s : result1) {
        cout << s << endl;
    }
    cout << endl;
    for (string s : result2) {
        cout << s << endl;
    }
    cout << endl;
    for (string s : result3) {
        cout << s << endl;
    }
    
    return 0;
}