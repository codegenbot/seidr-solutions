#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> result;
    size_t pos = 0, start = 0;
    string delimiter = " ";

    while ((pos = txt.find(delimiter, start)) != string::npos) {
        result.push_back(txt.substr(start, pos - start));
        start = pos + delimiter.length();
    }
    result.push_back(txt.substr(start));

    return result;
}

int main() {
    assert(split_words("") == vector<string>{""});  // Edge case: empty string
    assert(split_words("hello world") == vector<string>{"hello", "world"});  // Typical case
    assert(split_words("a,b,c") == vector<string>{"a,b,c"});  // String with no spaces should be as is
    cout << "All tests passed!" << endl;
    return 0;
}