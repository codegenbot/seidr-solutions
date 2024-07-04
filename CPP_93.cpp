#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message) {
    auto is_vowel = [](char c) {
        char lower = std::tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    };

    for (char &c : message) {
        if (is_vowel(c)) {
            if (std::tolower(c) == 'u')
                c = (std::islower(c) ? 'a' : 'A');
            else
                c = (std::islower(c) ? c + 2 : c + 2);
        } else if (std::isalpha(c)) {
            c = (std::islower(c) ? std::toupper(c) : std::tolower(c));
        }
    }
    return message;
}

int main() {
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    return 0;
}