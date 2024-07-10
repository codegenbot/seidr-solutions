```cpp
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.find('y') == s.size() - 1)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cin >> input;
    int result = vowels_count(input);
    return result;
}