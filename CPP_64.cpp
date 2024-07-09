#include <string>

int main() {
    int count = vowels_count("ACEDY");
    assert(count == 3);
    return 0;
}

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.back() == 'Y')) {
            count++;
        }
    }
    return count;
}