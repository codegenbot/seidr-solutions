#include <vector>
#include <cassert> // Include the necessary header

bool issame(std::vector<int> a, std::vector<int> b) { // Correct function signature
    return a == b; // Implement the comparison logic
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1})); // Call compare inside main
    return 0;
}