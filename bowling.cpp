```cpp
#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    // existing code here...
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}
```