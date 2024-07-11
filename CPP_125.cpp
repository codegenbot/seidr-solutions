#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prevPos);
        
        if (pos == string::npos) {
            result.push_back(txt.substr(prevPos));
            break;
        }
        
        if (txt.find(',', pos) == string::npos || pos > txt.find(',')) {
            result.push_back(txt.substr(prevPos, pos - prevPos));
            prevPos = pos + 1;
        } else {
            size_t commaPos = txt.find(',');
            result.push_back(txt.substr(prevPos, commaPos - prevPos));
            prevPos = commaPos + 1;
        }
    }
    
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if ((count - 1) % 2 == 0) {
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