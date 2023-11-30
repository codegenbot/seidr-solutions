#include <iostream>
#include <string>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    if (tolower(s.back()) == 'y') {
        count--;
    }
    return count;
}