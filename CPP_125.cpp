#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(const string &txt) {
    vector<string> result;
    size_t start = 0, end = 0;

    while ((end = txt.find(' ', start)) != string::npos) {
        result.push_back(txt.substr(start, end - start));
        start = end + 1;
    }
    result.push_back(txt.substr(start));

    return result;
}

int main() {
    assert((split_words("") == vector<string>{""}));  // Edge case: empty string
    assert((split_words("hello world") == vector<string>{"hello", "world"}));  // Typical case
    assert((split_words("a,b,c") == vector<string>{"a,b,c"}));  // String with no spaces should be as is
    cout << "All tests passed!" << endl;
    return 0;
}