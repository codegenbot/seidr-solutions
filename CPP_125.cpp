#include <iostream>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";

    for (char c : txt) {
        if (c == ' ') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty())
        result.push_back(word);

    if (result.size() == 0) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count++) % 2 != 0)
                    return vector<string> {to_string(count)};
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    vector<string> output = split_words(input);
    for (string str : output) {
        cout << str << endl;
    }
    return 0;
}