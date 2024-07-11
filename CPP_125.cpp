#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while (pos < txt.size()) {
        if (isspace(txt[pos])) {
            // Split on whitespace
            string word = txt.substr(0, pos);
            result.push_back(word);
            pos++;
            while (pos < txt.size() && isspace(txt[pos])) {
                pos++;
            }
        } else if (txt.find(',') != string::npos) {
            // Split on comma
            size_t commaPos = txt.find(',');
            if (commaPos == string::npos) {
                result.push_back(txt.substr(pos));
                break;
            }
            string word = txt.substr(pos, commaPos - pos);
            result.push_back(word);
            pos = commaPos + 1;
        } else {
            // No whitespace or commas, count odd lower-case letters
            int count = 0;
            for (char c : txt) {
                if (islower(c) && (c - 'a') % 2 != 0) {
                    count++;
                }
            }
            result.push_back(to_string(count));
            break;
        }
    }
    return result;
}

int main() {
    string test1 = "Hello world!";
    vector<string> result1 = split_words(test1);
    for (string s : result1) {
        cout << s << endl;
    }

    string test2 = "Hello,world!";
    vector<string> result2 = split_words(test2);
    for (string s : result2) {
        cout << s << endl;
    }

    string test3 = "abcdef";
    vector<string> result3 = split_words(test3);
    for (string s : result3) {
        cout << s << endl;
    }