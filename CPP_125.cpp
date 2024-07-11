#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find(' ', prev_pos)) != string::npos) {
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }

    if (prev_pos < txt.length()) {
        if (txt.find(',', prev_pos) == string::npos) {
            int count = 0;
            for (char c : txt.substr(prev_pos)) {
                if ((int)c >= (int)'a' && (int)c <= (int)'z') {
                    if (count++ % 2 != 0)
                        break;
                }
            }
            result.push_back(to_string(count));
        } else {
            size_t pos = txt.find(',', prev_pos);
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        }
    }

    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);

    vector<string> result = split_words(txt);
    for (string str : result) {
        cout << str << endl;
    }

    return 0;
}