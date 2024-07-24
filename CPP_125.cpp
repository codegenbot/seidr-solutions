#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result = {"default"};
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        
        if (pos == string::npos) {
            result.push_back(txt.substr(prev_pos));
            break;
        }
        
        if (txt.find(',', pos) == string::npos || pos > txt.find(',')) {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else {
            size_t comma_pos = txt.find(',', pos);
            result.push_back(txt.substr(prev_pos, comma_pos - prev_pos));
            prev_pos = comma_pos + 1;
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