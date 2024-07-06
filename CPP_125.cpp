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
        if (pos == string::npos && !txt.empty()) {
            pos = txt.find(',');
            if (pos == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (c >= 'a' && c <= 'z') {
                        if ((count & 1)) {
                            result.push_back(to_string(count));
                        }
                        count++;
                    } else {
                        break;
                    }
                }
                return result;
            }
        }

        string word = txt.substr(prev_pos, pos - prev_pos);
        result.push_back(word);

        prev_pos = pos + 1;
    }

    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> res = split_words(txt);
    for (string str : res) {
        cout << str << endl;
    }
    return 0;
}