#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t start = 0;
    while (start < txt.size()) {
        if (!isalpha(txt[start])) {
            start++;
            continue;
        }
        size_t end = start + 1;
        while (end < txt.size() && isalpha(txt[end])) {
            end++;
        }
        string word = txt.substr(start, end - start);
        result.push_back(word);
        start = end;
    }

    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                if ((int)c % 2 != 0) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    vector<string> output = split_words(input);
    for (string s : output) {
        cout << s << endl;
    }
    return 0;
}