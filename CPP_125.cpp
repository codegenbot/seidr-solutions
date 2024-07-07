#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            // Split on commas if no whitespace exists
            if (txt[pos] == ',') {
                result.push_back(txt.substr(0, pos));
                txt.erase(0, pos + 1);
                prevPos = 0;
            } else {
                break;
            }
        }

        size_t nextPos = txt.find_first_not_of(" ,", prevPos);
        if (nextPos == string::npos) {
            // No more whitespace or commas, split on characters
            result.push_back(txt.substr(prevPos));
            return result;
        }

        if (nextPos - prevPos > 1) {
            // Count the number of lower-case letters with odd order in the alphabet
            int count = 0;
            for (char c : txt.substr(prevPos, nextPos - prevPos)) {
                if (islower(c) && ord(c) % 2 != 0) {
                    count++;
                }
            }
            result.push_back(to_string(count));
            return result;
        }

        string word = txt.substr(prevPos, nextPos - prevPos);
        result.push_back(word);
        prevPos = pos + (pos == 0 ? 1 : 0);
    }

    if (!txt.empty()) {
        // Last word
        result.push_back(txt);
    }

    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);

    vector<string> words = split_words(txt);

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}