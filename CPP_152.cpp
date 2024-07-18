#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {4, 1, 5};

    std::vector<int> comparison = compare(game, guess);

    for (int i : comparison) {
        std::cout << i << " ";
    }

    return 0;
}