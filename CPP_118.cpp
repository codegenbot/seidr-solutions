#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i]))
            continue;
        if (ispunct(word[i]) || isdigit(word[i]))
            continue;
        if (word[i] == 'Y' && i > 0)
            continue;
        for (int j = i + 1; j < n; ++j) {
            if (!isalpha(word[j]))
                break;
            if (ispunct(word[j]) || isdigit(word[j]))
                break;
            if (word[i] == 'Y' && word[j] == 'U')
                return "U";
            if (vowel(word[i])) 
                return string(1, tolower(word[i]));
        }
    }
    return "";
}

bool vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}