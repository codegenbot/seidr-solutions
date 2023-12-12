```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    size_t pos = 0, prev_pos = 0;
    while ((pos = txt.find_first_of(" ,", pos)) != string::npos) {
        if (pos - prev_pos > 1) {
            words.push_back(txt.substr(prev_pos, pos - prev_pos));
        }
        prev_pos = pos + 1;
    }
    return words;
}
```