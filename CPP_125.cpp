#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter = " ";

    while ((pos = txt.find(delimiter)) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + delimiter.length());
    }
    result.push_back(txt);

    return result;
}

int main() {
    assert(split_words("") == vector<string>{});
    assert(split_words("hello world") == vector<string>{"hello", "world"});
    assert(split_words("a,b,c") == vector<string>{"a,b,c"});
    cout << "All tests passed!" << endl;
    return 0;
}