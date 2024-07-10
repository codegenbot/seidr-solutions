#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string temp = "";
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
            if (c == ' ') continue;
            else break;
        } else {
            temp += c;
        }
    }
    
    if (!temp.empty()) {
        result.push_back(temp);
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> res = split_words(txt);
    for (string s : res) {
        cout << s << endl;
    }
    return 0;
}