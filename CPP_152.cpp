#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> game = {1, 2, 3};
    vector<int> guess = {2, 3, 4};

    vector<int> result = compare(game, guess);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}