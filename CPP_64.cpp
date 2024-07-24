#include <iostream>
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.back() != 'y')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "ACEDY";
    assert(vowels_count(str) == 3);
    return 0;
}