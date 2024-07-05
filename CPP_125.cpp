#include <string>
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter;

    if (txt.find(' ') != string::npos) {
        delimiter = " ";
    } else if (txt.find(',') != string::npos) {
        delimiter = ",";
    } else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && ((c - 'a') % 2 == 0)) {
                count++;
            }
        }
        result.push_back(to_string(count));
        return result;
    }

    while ((pos = txt.find(delimiter)) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + delimiter.length());
    }
    result.push_back(txt);
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("hello world"), {"hello", "world"}));
    assert(issame(split_words("apple,banana,grape"), {"apple", "banana", "grape"}));
    assert(issame(split_words("noDelimiterHere"), {"7"})); 
    cout << "All tests passed!" << endl;
    return 0;
}