#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    vector<int> game = vector<int>(4); // initialize the vector with 4 elements
    game[0] = 1; game[1] = 2; game[2] = 3; game[3] = 5;

    assert(issame(compare(game, vector<int>({-1, 2, 3, 4})), {2, 0, 0, 1}));
    return 0;
}