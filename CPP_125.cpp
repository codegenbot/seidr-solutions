#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    const string space_delimiter = " ";
    const string comma_delimiter = ",";
    
    if (txt.find(space_delimiter) != string::npos) {
        while ((pos = txt.find(space_delimiter)) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if (txt.find(comma_delimiter) != string::npos) {
        while ((pos = txt.find(comma_delimiter)) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + comma_delimiter.length());
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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("hello world"), {"hello", "world"}));
    assert(issame(split_words("a,b,c"), {"a", "b", "c"}));
    cout << "All tests passed!" << endl;
    return 0;
}