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
    if (txt.empty()) return result;

    pos = txt.find(',');
    if (pos == string::npos) {
        int odd_count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 != 0) odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    } else {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) result.push_back(txt);
    }

    return result;
}

int main() {
    // test cases
    cout << "[{\"Hello\", \"world!\"}, " << endl;
    for (string s : split_words("Hello world!")) {
        cout << "{\"" << s << "\"}, " << endl;
    }
    cout << "]" << endl;

    cout << "[{\"Hello\", \"world!\"}, " << endl;
    for (string s : split_words("Hello,world!")) {
        cout << "{\"" << s << "\"}, " << endl;
    }
    cout << "]" << endl;

    cout << "{\"3\"} " << endl;
    for (string s : split_words("abcdef")) {
        cout << "{\"" << s << "\"} " << endl;
    }

    return 0;
}