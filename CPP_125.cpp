#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string temp = "";
    
    for (char c : txt) {
        if (c == ' ') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else if (c == ',') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    
    if (!temp.empty()) {
        result.push_back(temp);
    } else {
        int count = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (count % 2 == 1) {
                result.push_back(to_string(1));
            }
            ++count;
        }
    }
    
    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}