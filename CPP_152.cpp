#include <vector>

vector<int> compare(vector<int> game, vector<int> guess);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    vector<int> game = {3, 5, 7};
    vector<int> guess = {2, 4, 8};

    vector<int> difference = compare(game, guess);
    for (int i = 0; i < difference.size(); ++i) {
        cout << difference[i] << " ";
    }

    return 0;
}