```cpp
#include <iostream>
#include <string>
#include <utility>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int count[26] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            count[code[i] - 'a']++;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i] && count[guess[i] - 'a'] > 0) {
            whitePegs++;
            count[guess[i] - 'a']--;
        }
    }
    
    return std::make_pair(whitePegs, blackPegs);
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    std::pair<int, int> result = mastermind(code, guess);
    std::cout << result.first << '\n';
    std::cout << result.second << '\n';

    return 0;
}
```