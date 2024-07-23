#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (std::find_if(std::begin(vowels), std::end(vowels), boost::islower(c)) != std::end(vowels));
}

string get_closest_vowel(string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if (closest == -1)
                closest = i;
            else
                return string(1, word[closest]);
        }
    }
    return closest == -1 ? "" : string(1, word[closest]);
}

int main() {
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}