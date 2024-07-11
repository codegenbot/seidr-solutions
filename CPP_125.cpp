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
    if (txt.find(',') == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    } else {
        result.push_back(txt);
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