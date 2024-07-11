```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        if (pos == string::npos) {
            pos = txt.find(',');
        }
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }

    return result;
}

int main() {
    cout << "Enter a string: ";
    string txt;
    getline(cin, txt);
    vector<string> res = split_words(txt);
    for (auto s : res) {
        cout << s << endl;
    }
    return 0;
}