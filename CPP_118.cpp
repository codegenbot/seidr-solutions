#include <bits/stdc++.h>
using namespace std;

bool isvowel(char ch) {
    if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U')
        return true;
    return false;
}

bool isconsonant(string s, int i) {
    for(int j = 0; j < 26; ++j)
        if(s[i] == (char)(97+j))
            return false;
    return true;
}

string get_closest_vowel(string word) {
    int n = word.length();
    int min_dist = n;
    int index = -1;
    
    for (int i = 0; i < n; ++i) {
        if (isvowel(word[i])) {
            int dist = i;
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word, j)) break;
                else if (!isvowel(word[j]) && isconsonant(word, j)) continue;
                else dist = i;
            }
            if (dist < min_dist) {
                min_dist = dist;
                index = i;
            }
        }
    }
    
    return word.empty() ? "" : string(1, word[index]);
}