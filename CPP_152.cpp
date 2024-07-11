#include <vector>
#include <cassert>
#include <algorithm>

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
    assert(issame(compare(vector<int>{1, 2, 3, 5}, vector<int>{{-1, 2, 3, 4}}), vector<int>{{2, 0, 0, 1}}));
    return 0;
}