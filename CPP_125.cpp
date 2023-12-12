```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> splitWords(string txt) {
    vector<string> words;
    int pos = 0;
    while (pos != string::npos) {
        int newPos = txt.find_first_of(" ", pos);
        if (newPos == string::npos) {
            break;
        }
        words.push_back(txt.substr(pos, newPos - pos));
        pos = newPos + 1;
    }
    return words;
}
```