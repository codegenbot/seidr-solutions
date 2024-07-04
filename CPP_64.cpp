#include <iostream>
#include <string>
#include <algorithm>

int vowels_count(const std::string& s) {
    int count = 0;
    std::string lower_s = s;
    std::transform(lower_s.begin(), lower_s.end(), lower_s.begin(), ::tolower);
    for (int i = 0; i < lower_s.length(); ++i) {
        if (lower_s[i] == 'a' || lower_s[i] == 'e' || lower_s[i] == 'i' || lower_s[i] == 'o' || lower_s[i] == 'u' || (lower_s[i] == 'y' && i == lower_s.length() - 1)) {
            ++count;
        }
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    std::cout << "Test passed!" << std::endl;
    return 0;
}