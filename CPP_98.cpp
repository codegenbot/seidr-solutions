```cpp
#include <string>
#include <cctype>
#include <cassert>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if ((i % 2 == 0 && std::isupper(str[i])) && (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            count++;
        }
    }

    assert(count == count_upper(str));
    std::cout << "Number of Uppercase Vowels at even positions: " << count << std::endl;
    return 0;
}