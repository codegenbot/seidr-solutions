#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.length() - 1; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            int prevConsonant = i;
            while (prevConsonant > 0 && vowels.find(word[prevConsonant-1]) == string::npos)
                prevConsonant--;
            return word.substr(prevConsonant, i - prevConsonant);
        }
    }
    return "";
}