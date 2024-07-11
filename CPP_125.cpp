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
            if (txt.find(',') == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (c >= 'a' && c <= 'z') {
                        count += (c - 'a');
                    }
                }
                result.push_back(to_string(count));
                return result;
            } else {
                pos = txt.find(',');
                break;
            }
        }

        string word = txt.substr(prevPos, pos - prevPos);
        result.push_back(word);

        prevPos = pos + 1;
    }

    if (pos != string::npos) {
        string word = txt.substr(prevPos);
        result.push_back(word);
    }

    return result;
}

int main() {
    // Test cases
    cout << "{";
    for (string s : split_words("Hello world!")) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string s : split_words("Hello,world!")) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    cout << "{";
    for (string s : split_words("abcdef")) {
        cout << "\"" << s << "\"";
    }
    cout << "}" << endl;

    return 0;
}