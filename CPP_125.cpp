#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    if (txt.find(' ') != string::npos) {
        size_t pos = 0;
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if (txt.find(',') != string::npos) {
        size_t pos = 0;
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else {
        int odd_count = 0;
        for (char c : txt) {
            if (islower(c) && ((c - 'a') % 2 == 0)) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words("hello world"), {"hello", "world"}));
    assert(issame(split_words("a,b,c"), {"a", "b", "c"}));
    assert(issame(split_words("abcdef"), {"3"}));
    assert(issame(split_words(""), {"0"}));
    
    cout << "All tests passed!" << endl;
    return 0;
}