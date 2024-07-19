#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = ' ';

    for (int i = word.size() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i + 1; j < word.size(); ++j) {
                if (vowels.find(word[j]) == string::npos) {
                    int distance = j - i;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }

    return closest_vowel == ' ' ? "" : string(1, closest_vowel);
}

int main() {
    cout << get_closest_vowel("Above") << endl;

    return 0;
}