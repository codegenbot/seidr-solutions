```cpp
#include <string>
using namespace std;

bool isalpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isascii(char c) {
    return c >= 0x20;
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isascii(word[i])) break;
        if (vowels.find(toupper(word[i])) != string::npos)
            return word.substr(left, i - left + 1);
        left = i + 1;
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}