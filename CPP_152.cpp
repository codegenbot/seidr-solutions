#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    vector<int> game = {1, 2, 3, 4};
    vector<int> guess = {2, 2, 2, 2};

    vector<int> differences = compare(game, guess);

    for (int diff : differences) {
        std::cout << diff << " ";
    }

    if (issame(game, guess)) {
        std::cout << "\nThe game and guess are the same." << std::endl;
    } else {
        std::cout << "\nThe game and guess are different." << std::endl;
    }

    return 0;
}