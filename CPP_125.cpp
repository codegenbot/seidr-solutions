#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    vector<string> words;
    size_t commaPos = txt.find(',');
    while ((commaPos = txt.find(',')) != string::npos) {
        words.push_back(txt.substr(0, commaPos));
        txt.erase(0, commaPos + 1);
    }
    if (!txt.empty()) {
        words.push_back(txt);
    } else {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= 97 && (int)c <= 122) {
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
    vector<string> result = split_words(txt);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}