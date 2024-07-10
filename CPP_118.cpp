```
#include <string>
#include <cctype>

using namespace std;

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
           (c >= 'A' && c <= 'U');
}

string get_closest_vowel(string word) {
    string closest = "";
    int min_dist = INT_MAX;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) {
            int dist = i;
            if (dist < min_dist) {
                min_dist = dist;
                closest = word.substr(i);
            }
        }
    }
    return closest;
}