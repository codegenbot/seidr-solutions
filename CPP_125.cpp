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
            // Split on commas
            if (txt[0] == ',') {
                result.push_back(txt.substr(1));
                break;
            }
        }

        string word = txt.substr(prevPos, pos - prevPos);
        if (!word.empty()) {
            result.push_back(word);
        }

        prevPos = pos + 1;

        if (pos == string::npos) {
            // No more whitespaces or commas
            size_t count = 0;
            for (char c : txt) {
                if (c >= 'a' && c <= 'z') {
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
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);

    for (const auto& word : result) {
        cout << word << endl;
    }

    return 0;
}