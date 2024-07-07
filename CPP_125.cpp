#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }
    
    if (prevPos < txt.size()) {
        result.push_back(txt.substr(prevPos));
    } else if (txt.empty() || all_of(txt.begin(), txt.end(), ::isspace)) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count++) % 2 == 1) {
                    result.push_back(to_string(count));
                    break;
                }
            }
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