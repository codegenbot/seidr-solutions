#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter = " ";

    string txt_copy = txt; // Make a copy to work on
    if (txt_copy.find(' ') != string::npos) {
        while ((pos = txt_copy.find(' ')) != string::npos) {
            result.push_back(txt_copy.substr(0, pos));
            txt_copy.erase(0, pos + 1);
        }
        result.push_back(txt_copy);
    } else if (txt_copy.find(',') != string::npos) {
        delimiter = ",";
        while ((pos = txt_copy.find(delimiter)) != string::npos) {
            result.push_back(txt_copy.substr(0, pos));
            txt_copy.erase(0, pos + delimiter.length());
        }
        result.push_back(txt_copy);
    } else {
        int count = 0;
        for (char c : txt_copy) {
            if (c >= 'a' && c <= 'z' && (c - 'a') % 2 == 0) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), vector<string>{"0"}));
    assert(issame(split_words("hello world"), vector<string>{"hello", "world"}));
    assert(issame(split_words("a,b,c"), vector<string>{"a", "b", "c"}));
    cout << "All tests passed!" << endl;
    return 0;
}