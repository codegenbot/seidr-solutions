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
    int n, m;
    std::cout << "Enter the number of elements in your game and guess vectors: ";
    std::cin >> n >> m;

    std::vector<int> game(n);
    std::vector<int> guess(m);

    std::cout << "Enter the elements for your game vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> game[i];
    }

    std::cout << "Enter the elements for your guess vector: ";
    for (int i = 0; i < m; i++) {
        std::cin >> guess[i];
    }

    std::vector<int> res = compare(game, guess);

    std::cout << "The result is: ";
    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }
    return 0;
}