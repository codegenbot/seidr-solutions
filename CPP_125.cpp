```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    int pos = 0;
    while (pos != string::npos) {
        pos = txt.find(" ", pos);
        if (pos == string::npos) break;
        words.push_back(txt.substr(0, pos));
        txt = txt.substr(pos + 1);
    }
    return words;
}
```