```cpp
#include <iostream>
#include <string>

int scoreOfRound(std::string round) {
    int score = 0;
    // implementation here
    return score;
}

int main() {
    std::string round;
    std::getline(std::cin, round);

    int score = scoreOfRound(round);
    std::cout << score << std::endl;

    return 0;
}
```