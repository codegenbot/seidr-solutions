```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != string::npos) {
        if (txt.find(' ', pos) == string::npos && txt.find(',', pos) == string::npos) {
            int count_odd_lowercase = 0;
            for (char c : txt.substr(pos)) {
                if (c >= 'a' && c <= 'z') {
                    if ((int)c % 2 != 0)
                        count_odd_lowercase++;
                }
            }
            result.push_back(to_string(count_odd_lowercase));
            return result;
        }

        pos = txt.find(' ', pos);
        if (pos == string::npos) {
            pos = txt.find(',', prev_pos);
        }
        if (pos != string::npos) {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else {
            result.push_back(txt.substr(prev_pos));
            break;
        }
    }

    return result;
}

int main() {
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