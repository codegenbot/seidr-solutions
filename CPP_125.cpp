#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;

    while (pos != string::npos) {
        pos = txt.find(' ', prevPos);
        if (pos == string::npos) {
            if (txt.find(',') == string::npos)
                return {to_string(count(txt.begin(), txt.end(), c))};
            else
                pos = txt.find(',');
        }
        result.push_back(txt.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }

    return result;
}

int main() {
    string txt;
    cout << "Enter a string: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);

    for (const auto& str : result) {
        cout << str << endl;
    }
    return 0;
}