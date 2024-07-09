```cpp
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(game[i], guess[i])) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> game, guess;

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        game.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Guess the element: ";
        std::cin >> x;
        guess.push_back(x);
    }

    std::vector<int> res = compare(game, guess);

    std::cout << "Result: ";
    for (int i = 0; i < n; i++) {
        std::cout << res[i] << " ";
    }
    return 0;
}