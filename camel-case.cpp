#include <vector>
#include <iostream>
#include <string>

string kebabToCamel(const string& s) {
    vector<string> words;
    size_t pos = 0;
    while ((pos = s.find(" ")) != string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    if (!s.empty()) words.push_back(s);

    string result;
    for (const auto& word : words) {
        size_t dashPos = word.find("-");
        if (dashPos != string::npos) {
            result += toupper(word[0]);
            result += word.substr(1, dashPos - 1);
            word.erase(0, dashPos + 1);
        } else {
            if (!result.empty()) result.push_back(toupper(word[0]));
            else result = tolower(word);
        }
    }

    return result;
}

int main() {
    string input;
    while (true) {
        cout << "input: ";
        cin >> input;
        cout << "output: " << kebabToCamel(input) << endl;
    }
    return 0;
}