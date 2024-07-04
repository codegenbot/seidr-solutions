#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encode(string message) {
    auto is_vowel = [](char c) {
        char lower = tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    };

    for (char &c : message) {
        if (is_vowel(c)) {
            if (tolower(c) == 'u')
                c = (islower(c) ? 'a' : 'A');
            else
                c = (islower(c) ? c + 2 : c + 2);
        } else if (isalpha(c)) {
            c = (islower(c) ? toupper(c) : tolower(c));
        }
    }
    return message;
}

int main() {
    cout << encode("I DoNt KnOw WhAt tO WrItE") << endl;
    return 0;
}