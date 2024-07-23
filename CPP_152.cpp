bool sameVectors(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compareGuess(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    assert(sameVectors(compareGuess({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
}