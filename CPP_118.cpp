```cpp
#include <string>
#include <cctype>

using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 2; i > 0; --i) {
        if (!isalpha(tolower(word[i]))) continue;
        if (!isalpha(tolower(word[i-1])) && !isalpha(tolower(word[i-2)))) return tolower(word[i]);
    }
    return "";
}