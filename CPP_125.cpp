#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ")) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }

    // Check for commas
    pos = txt.find(',');
    if (pos == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count += (int)c - (int)'a';
            }
        }
        result.push_back(to_string(count));
    } else {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }

    return result;
}

int main() {
    // Example usage
    string text = "Hello world!";
    vector<string> words = split_words(text);
    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}