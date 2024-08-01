#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t start = 0;
    for (size_t i = 0; i <= txt.size(); ++i) {
        if (i == txt.size() || (txt[i] == ' ' && (i == 0 || txt[i - 1] != ','))) {
            string word = txt.substr(start, i - start);
            result.push_back(word);
            start = i + 1;
        }
    }
    return result.empty() ? vector<string>({"" + to_string(txt.size())}) : result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    vector<string> output = split_words(input);
    for (const auto& str : output) {
        cout << str << endl;
    }
    return 0;
}