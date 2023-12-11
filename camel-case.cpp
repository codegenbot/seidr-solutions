```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    vector<string> words;
    size_t pos = 0;
    while ((pos = input.find("-")) != string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    
    if (words.size() > 0) {
        words.push_back(input);
    }
    
    string output = "";
    for (int i = 0; i < words.size(); i++) {
        if (i == 0) {
            output += words[i];
        } else {
            output += toUppercase(words[i].substr(0, 1)) + words[i].substr(1);
        }
    }
    
    cout << output << endl;
    
    return 0;
}
```