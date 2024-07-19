```cpp
#include <iostream>
#include <strings.h>

int count_upper(char *s) {
    int count = 0;
    for (int i = 0; s[i]; i++) {
        if ((i % 2 == 0 && isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    char input[100];
    std::cout << "Enter a string: ";
    fgets(input, sizeof(input), stdin);
    int result = count_upper(input);
    std::cout << "Number of uppercase vowels at even positions: " << result << std::endl;
    return 0;
}