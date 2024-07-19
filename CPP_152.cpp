#include <vector>
#include <initializer_list>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    if (!isSame(game, guess)) {
        return {};
    }

    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (std::count(game.begin(), game.end(), guess[i]) > 0) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    std::vector<int> game = {1,2,3,5};
    std::vector<int> guess = {-1,2,3,4};
    std::vector<int> output = compare(game, guess);
    for (int i = 0; i < output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}