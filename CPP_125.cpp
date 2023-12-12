```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    if (txt.find(" ") != string::npos) {
        words = std::string::split(txt, " ");
    } else if (txt.find(",") != string::npos) {
        words = std::string::split(txt, ",");
    } else {
        int count = 0;
        for (int i = 0; i < txt.size(); i++) {
            if (islower(txt[i])) {
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    return words;
}
```