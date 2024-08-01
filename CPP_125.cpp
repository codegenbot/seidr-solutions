#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.length() > 0) {
        result.push_back(txt);
    } else {
        int count = 0;
        for (char c : txt) {
            if ((int)c - 'a' % 2 == 0 && (int)c >= 'a' && (int)c <= 'z') {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}

int main() {
    string txt;
    cout << "Enter a text: ";
    getline(cin, txt);
    vector<string> result = split_words(txt);
    for (const auto& s : result) {
        cout << s << endl;
    }
    return 0;
}