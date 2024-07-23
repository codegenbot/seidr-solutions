#include <iostream>
#include <string>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    char lowered = tolower(c);
    for (char v : vowels) {
        if (v == lowered) return true;
    }
    return false;
}

std::string get_closest_vowel(std::string word) {
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