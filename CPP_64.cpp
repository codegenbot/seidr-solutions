```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << vowels_count("ACEDY") << std::endl;
    assert(vowels_count("ACEDY") == 3);
    return 0;

    int vowels_count(std::string s) {
        int count = 0;
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            } else if (c == 'y' && s.back() == c) {
                count++;
            }
        }
        return count;
    }
}