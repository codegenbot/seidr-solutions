```c++
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (std::find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end());
}

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if (closest == -1)
                closest = i;
            else
                return ((word[closest] <= tolower(word[i])) ? std::string(1, tolower(word[closest])) : std::string(1, tolower(word[i])));
        }
    }
    return "";
}

int main() {
    if (get_closest_vowel("Above") != "o")
        cout << "Test failed. Expected: \"o\", but got " << get_closest_vowel("Above") << endl;
    cout << get_closest_vowel("Apple") << endl;
    return 0;
}