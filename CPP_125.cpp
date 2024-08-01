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
            if (c == ',') break; // stop at the first comma
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
                if ((count - 1) % 2 == 0) break; // stop at the first odd-indexed lowercase letter
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
    vector<string> result = split_words(txt);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}