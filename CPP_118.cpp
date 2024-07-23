```cpp
#include <iostream>
#include <string>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (std::find(std::begin(vowels), std::end(vowels), tolower(c)) != std::end(vowels));
}

string get_closest_vowel(string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if (closest == -1)
                closest = i;
            else
                return "1";
        }
    }
    return std::to_string(closest);
}

int main() {
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}