#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string get_closest_vowel(string word) {
    char closest_vowel = ' ';
    int min_distance = INT_MAX;

    for (char c : word) {
        int distance_to_a = abs(c - 'a');
        int distance_to_e = abs(c - 'e');
        int distance_to_i = abs(c - 'i');
        int distance_to_o = abs(c - 'o');
        int distance_to_u = abs(c - 'u');

        int min_distance_to_vowel = min({distance_to_a, distance_to_e, distance_to_i, distance_to_o, distance_to_u});

        if (min_distance_to_vowel < min_distance) {
            min_distance = min_distance_to_vowel;
            if (distance_to_a == min_distance_to_vowel) closest_vowel = 'a';
            else if (distance_to_e == min_distance_to_vowel) closest_vowel = 'e';
            else if (distance_to_i == min_distance_to_vowel) closest_vowel = 'i';
            else if (distance_to_o == min_distance_to_vowel) closest_vowel = 'o';
            else closest_vowel = 'u';
        }
    }

    return string(1, closest_vowel);
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}