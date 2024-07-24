#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    // Main function logic here
    return 0;
}