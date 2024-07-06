```cpp
#include <string>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = 0; i < word.length(); i++) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            return word.substr(0, i);
        }
    }
    return "";
}