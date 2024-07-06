#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
            if ((int)c - (int)'a' % 26 == 3) {
                count++;
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