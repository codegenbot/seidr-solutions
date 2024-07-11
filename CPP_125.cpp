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

    if (result.size() == 0) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count % 2) == 1) {
                    result.push_back(to_string(count));
                    break;
                }
                count++;
            } else {
                string temp = "";
                while (pos < txt.size() && txt[pos] != ' ') {
                    temp += txt[pos];
                    pos++;
                }
                if (!temp.empty()) {
                    result.push_back(temp);
                }
                pos--;
                while (pos >= 0 && txt[pos] == ' ') {
                    pos--;
                }
                if (pos >= 0) {
                    txt.erase(0, pos + 1);
                } else {
                    break;
                }
            }
        }
    }

    result.push_back(txt);
    return result;
}

int main() {
    string input = "Hello world!";
    vector<string> output = split_words(input);
    for (string s : output) {
        cout << s << endl;
    }
    return 0;
}