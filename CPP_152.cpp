#include <iostream>
#include <vector>

namespace myspace {
    bool isSame(std::vector<int> a, std::vector<int> b) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

    std::vector<int> compareGameGuess(std::vector<int> game, std::vector<int> guess) {
        std::vector<int> result;
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                result.push_back(0);
            } else {
                int diff = abs(game[i] - guess[i]);
                result.push_back(diff);
            }
        }
        return result;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> game(n); 

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> game[i];
    }

    std::vector<int> guess(n);
    std::cout << "Enter your guess: ";
    for (int i = 0; i < n; i++) {
        std::cin >> guess[i];
    }

    if (myspace::isSame(game, guess)) {
        std::cout << "Congratulations! You guessed correctly." << std::endl;
    } else {
        std::vector<int> result = myspace::compareGameGuess(game, guess);
        std::cout << "Incorrect. The correct numbers are: ";
        for (int i = 0; i < n; i++) {
            if (result[i] == 0) {
                std::cout << game[i] << " ";
            } else {
                std::cout << abs(game[i] - guess[i]) << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

int testIsSame() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    if (!myspace::isSame(a, b)) {
        return 1; // failed
    }
    return 0; // passed
}

int testCompareGameGuess() {
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {1, 2, 4};
    std::vector<int> result = myspace::compareGameGuess(game, guess);
    if (result[0] != 0 || result[1] != abs(3 - 4)) {
        return 1; // failed
    }
    return 0; // passed
}

int main(int argc, char const *argv[]) {
    int testResult = testIsSame();
    if (testResult) {
        std::cout << "Test for isSame failed." << std::endl;
    } else {
        std::cout << "Test for isSame passed." << std::endl;
    }

    testResult = testCompareGameGuess();
    if (testResult) {
        std::cout << "Test for compareGameGuess failed." << std::endl;
    } else {
        std::cout << "Test for compareGameGuess passed." << std::endl;
    }
    
    return 0;
}