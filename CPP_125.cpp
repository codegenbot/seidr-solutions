#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        
        if (pos == string::npos) {
            pos = txt.find(',');
            if (pos == string::npos)
                break;
        }
        
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }
    
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= 97 && (int)c <= 122 && (count & 1)) {
                result.push_back(to_string(count));
                break;
            }
            count++;
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