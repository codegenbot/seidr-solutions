#include <iostream>
#include <string>
#include <cassert>

string get_closest_vowel(string word);

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}