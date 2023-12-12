```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> words;
    size_t pos = 0;
    while (pos < txt.size()) {
        size_t start = pos;
        size_t end = txt.find(" ", pos);
        if (end == string::npos) {
            break;
        }
        words.push_back(txt.substr(start, end - start));
        pos = end + 1;
    }
    return words;
}

int main() {
    string txt = "Hello World!";
    vector<string> words = split_words(txt);
    for (const auto& word : words) {
        cout << word << endl;
    }
    return 0;
}
```