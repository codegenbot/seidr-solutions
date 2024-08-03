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
    
    if (txt.empty()) {
        return result;
    }

    pos = txt.find(',');
    if (pos == string::npos) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= (int)'a' && (int)c <= (int)'z') {
                if ((int)c % 2 != 0) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    } else {
        while (pos != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            pos = txt.find(',');
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }

    return result;
}

int main() {
    // Test cases
    string test1 = "Hello world!";
    vector<string> result1 = split_words(test1);
    for (string s : result1) {
        cout << s << endl;
    }

    string test2 = "Hello,world!";
    vector<string> result2 = split_words(test2);
    for (string s : result2) {
        cout << s << endl;
    }

    string test3 = "abcdef";
    vector<string> result3 = split_words(test3);
    for (string s : result3) {
        cout << s << endl;
    }

    return 0;
}