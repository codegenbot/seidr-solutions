```
#include <iostream>
#include <cassert>
using namespace std;

char get_closest_vowel(const char* word) {
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return word[i];
        }
    }
    return '\0';
}

int main() {
    const char* word = "Above";
    assert (get_closest_vowel(word) == 'o');
    return 0;
}
```