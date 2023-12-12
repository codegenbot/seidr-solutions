```cpp
#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int i = 0;

    while (frame < 10) {
        if (input[i] == 'X') {
            score += 10;
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
            score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
            i++;
        } else if (input[i + 1] == '/') {
            score += 10;
            score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
            i += 2;
        } else {
            score += (input[i] - '0');
            score += (input[i + 1] - '0');
            i += 2;
        }

        frame++;
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = getScore(input);
    std::cout << score << std::endl;

    return 0;
}
```