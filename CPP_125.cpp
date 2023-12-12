```
#include <iostream>
#include <string>
#include <vector>

// Forward declaration of split_words
void split_words(std::string& txt);

int main() {
    // ...
}

// Definition of split_words
void split_words(std::string& txt) {
    std::vector<std::string> words;
    for (auto it = txt.begin(); it != txt.end(); ++it) {
        if (*it == ' ') {
            words.push_back("");
        } else {
            words.back() += *it;
        }
    }
}
```