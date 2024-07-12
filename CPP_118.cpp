#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string::reverse_iterator it = word.rbegin();
    for (; it != word.rend(); ++it) {
        if (tolower(*it) == 'a' || tolower(*it) == 'e' || tolower(*it) == 'i' || tolower(*it) == 'o' || tolower(*it) == 'u') {
            string::iterator it2 = word.begin();
            while (it2 != it && !isvowel(tolower(*it2))) {
                ++it2;
            }
            if (it2 != it) {
                return string(1, *it);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u';
}