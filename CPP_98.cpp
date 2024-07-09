```cpp
#include <string>
#include <cctype>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && std::isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    int result = count_upper(s);
    return 0;
}