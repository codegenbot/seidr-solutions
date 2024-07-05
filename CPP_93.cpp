#include <iostream>
#include <string>
#include <cctype> // For tolower, toupper, islower, isupper

using namespace std;

string encode(string message) {
    auto swap_case = [](char c) -> char {
        if (islower(c)) return toupper(c);
        if (isupper(c)) return tolower(c);
        return c;
    };
    
    auto replace_vowel = [](char c) -> char {
        switch(tolower(c)) {
            case 'a': return c + 2;
            case 'e': return c + 2;
            case 'i': return c + 2;
            case 'o': return c + 2;
            case 'u': return c + 2;
            default: return c;
        }
    };
    
    for (char &c : message) {
        c = swap_case(c);
        c = replace_vowel(c);
    }
    return message;
}

int main() {
    // Example usage:
    cout << encode("I DoNt KnOw WhAt tO WrItE") << endl;
    return 0;
}