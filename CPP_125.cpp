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
            if (islower(c) && ((c - 'a') % 2 == 1)) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}

int main() {
    assert(split_words("hello world") == vector<string>{"hello", "world"});
    assert(split_words("a,b,c") == vector<string>{"a", "b", "c"});
    assert(split_words("abcdef") == vector<string>{"3"});
    assert(split_words("") == vector<string>{"0"});
    
    cout << "All tests passed!" << endl;
    return 0;
}