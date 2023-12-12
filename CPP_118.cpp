```
#include <iostream>
#include <string>

using namespace std;

string get_closest_vowel(string word) {
    int len = word.length();
    for (int i = len - 1; i >= 0; i--) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return word.substr(i, 1);
        }
    }
    return "";
}
```