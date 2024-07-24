```cpp
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for(int i = word.size() - 1; i >= 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}