#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;

    if ((pos = txt.find(' ')) != string::npos) {
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if ((pos = txt.find(',')) != string::npos) {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else {
        int even_odd_count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) { // odd-indexed letters are odd in 0-indexed alphabet
                even_odd_count++;
            }
        }
        result.push_back(to_string(even_odd_count));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("hello world"), {"hello", "world"}));
    assert(issame(split_words("one,two,three"), {"one", "two", "three"}));
    
    cout << "All tests passed!" << endl;
    return 0;
}