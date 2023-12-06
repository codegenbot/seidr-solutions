```cpp
#include <iostream>
#include <string>

int is_bored(std::string S) {
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (S[i + 1] == '.' || S[i + 1] == '?' || S[i + 1] == '!')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    getline(std::cin, input);
    int count = is_bored(input);
    if (count > 0) {
        std::cout << "You are bored." << std::endl;
    } else {
        std::cout << "You are not bored." << std::endl;
    }
    return 0;
}
```
This code will prompt the user to enter a string, and then it will check if the string contains the word "I" followed by either a period, question mark, or exclamation point. If it does, it will print "You are bored." Otherwise, it will print "You are not bored.".