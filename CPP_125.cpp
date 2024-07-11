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
            // No whitespace found, check for commas
            pos = txt.find(',', prevPos);
            if (pos == string::npos) {
                // No whitespaces or commas found, count odd order lowercase letters
                int count = 0;
                for (char c : txt.substr(prevPos)) {
                    if (islower(c) && (c - 'a') % 2 != 0) {
                        count++;
                    }
                }
                result.push_back(to_string(count));
                break;
            }
        }

        string word = txt.substr(prevPos, pos - prevPos);
        result.push_back(word);

        prevPos = pos + 1;
    }

    return result;
}

int main() {
    // Test cases
    cout << "{";
    for (string s : split_words("Hello world!")) {
        cout << "\"" << s << "\", ";
    }
    cout << "}" << endl;

    cout << "{";
    for (string s : split_words("Hello,world!")) {
        cout << "\"" << s << "\", ";
    }
    cout << "}" << endl;

    cout << "{";
    for (string s : split_words("abcdef")) {
        cout << "\"" << s << "\", ";
    }
    cout << "}" << endl;

    return 0;
}