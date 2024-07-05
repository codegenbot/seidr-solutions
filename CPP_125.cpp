#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter = " ";
    string temp_txt = txt;

    if (txt.find(' ') != string::npos) {
        while ((pos = temp_txt.find(' ')) != string::npos) {
            result.push_back(temp_txt.substr(0, pos));
            temp_txt.erase(0, pos + 1);
        }
        result.push_back(temp_txt);
    } else if (txt.find(',') != string::npos) {
        delimiter = ",";
        while ((pos = temp_txt.find(delimiter)) != string::npos) {
            result.push_back(temp_txt.substr(0, pos));
            temp_txt.erase(0, pos + delimiter.length());
        }
        result.push_back(temp_txt);
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