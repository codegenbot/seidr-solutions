#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    vector<int> game = {1, 2, 3, 5};
    vector<int> guess = {-1, 2, 3, 4};
    vector<int> result = compare(game, guess);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}