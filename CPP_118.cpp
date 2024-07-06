```cpp
#include <string>
#include <cctype>
using namespace std;

bool is_punct(char c) {
    return !isalpha(c);
}

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (is_punct(word[i])) break;
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