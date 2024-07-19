#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {3, 2, 1};
    
    std::vector<int> result = compare(game, guess);
    for (int element : result) {
        std::cout << element << " ";
    }
    
    return 0;
}