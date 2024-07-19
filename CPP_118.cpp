#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiou";
    char closest_vowel = word[0];
    int min_distance = abs(word[0] - 'a');

    for (char c : word) {
        for (char v : vowels) {
            int distance = abs(c - v);
            if (distance < min_distance) {
                closest_vowel = v;
                min_distance = distance;
            }
        }
    }

    return string(1, closest_vowel);
}