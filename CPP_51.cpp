```
#include <iostream>
#include <string>
#include <cassert>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (auto c : text) {
        if (!is_vowel(c)) {
            result += c;
        }
    }
    return result;
}

bool is_vowel(char c) {
    return std::find(vowels.begin(), vowels.end(), c) != vowels.end();
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}
```
In this solution, I have removed the second `main` function and renamed the first one to `main`. This way, there is only one `main` function in the code, which is the entry point of the program.
I have also modified the `remove_vowels` function to use the `is_vowel` function to check whether a character is a vowel or not. If it's not a vowel, it adds it to the result string. The `is_vowel` function uses the `std::find` algorithm to check if the character `c` is present in the string `vowels`.
Finally, I have removed any triple quotes, language name or explanations from the code.