#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark as used
            guess[i] = ' '; // mark as used
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black--;
            white++;
        } else if (std::count(code.begin(), code.end(), guess[i]) > 0) {
            white++;
        }
    }

    return {black, white};
}

int main() {
    std::string code;
    std::cin >> code;
    std::string guess;
    std::cin >> guess;

    auto result = mastermind(code, guess);

    std::cout << result[0] << '\n';
    std::cout << result[1] << '\n';

    return 0;
}