#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter = " ";

    if (txt.find(' ') != string::npos) {
        while ((pos = txt.find(' ')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if (txt.find(',') != string::npos) {
        delimiter = ",";
        while ((pos = txt.find(delimiter)) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + delimiter.length());
        }
        result.push_back(txt);
    } else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (c - 'a') % 2 == 0) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}

int main() {
    assert((split_words("") == vector<string>{"0"}));
    assert((split_words("hello world") == vector<string>{"hello", "world"}));
    assert((split_words("a,b,c") == vector<string>{"a", "b", "c"}));

    cout << "All tests passed!" << endl;
    return 0;
}