#include <vector>

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
    vector<int> game = {1, 2, 3};
    vector<int> guess = {3, 2, 1};

    vector<int> comparison = compare(game, guess);

    for (int i = 0; i < comparison.size(); ++i) {
        cout << comparison[i] << " ";
    }

    return 0;
}