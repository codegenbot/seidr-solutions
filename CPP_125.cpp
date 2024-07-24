#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while (pos < txt.size()) {
        if (ispunct(txt[pos])) {
            string temp = txt.substr(0, pos);
            if (!temp.empty() && temp.find_first_of(" ,") == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (islower(c)) {
                        count += (c - 'a');
                    }
                }
                result.push_back(to_string(count));
            } else {
                result.push_back(temp);
            }
            pos++;
            while (pos < txt.size() && ispunct(txt[pos])) {
                pos++;
            }
        } else if (isspace(txt[pos]) || txt[pos] == ',') {
            string temp = txt.substr(0, pos);
            if (!temp.empty()) {
                result.push_back(temp);
            }
            pos++;
            while (pos < txt.size() && (ispunct(txt[pos]) || txt[pos] == ',')) {
                pos++;
            }
        } else {
            pos++;
        }
    }
    string temp = txt.substr(0, pos);
    if (!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}

int main() {
    // Test cases
    cout << "[{\"Hello\", \"world!\"}, {\"Hello\", \"world!\"}, {\"3\"}]" << endl;
    for (const auto& word : split_words("Hello world!")) {
        cout << "\"" << word << "\"";
    }
    cout << endl;

    cout << "[{\"Hello\", \"world!\"}, {\"Hello\", \"world!\"}, {\"3\"}]" << endl;
    for (const auto& word : split_words("Hello,world!")) {
        cout << "\"" << word << "\"";
    }
    cout << endl;

    cout << "{\"3\"}" << endl;
    for (const auto& word : split_words("abcdef")) {
        cout << "\"" << word << "\"";
    }
    cout << endl;

    return 0;
}