```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    if (txt.find(" ") != string::npos) {
        // Use find to search for spaces
        int pos = 0;
        while ((pos = txt.find(" ", pos)) != string::npos) {
            // Extract the substring up to the space
            words.push_back(txt.substr(pos, pos + 1));
            // Update the position to start searching from the next character
            pos++;
        }
    } else if (txt.find(",") != string::npos) {
        // Use find to search for commas
        int pos = 0;
        while ((pos = txt.find(",", pos)) != string::npos) {
            // Extract the substring up to the comma
            words.push_back(txt.substr(pos, pos + 1));
            // Update the position to start searching from the next character
            pos++;
        }
    } else {
        int count = 0;
        for (int i = 0; i < txt.size(); i++) {
            if (islower(txt[i])) {
                count++;
            }
        }
        words.push_back(std::to_string(count));
    }
    return words;
}
```