#include <vector>
#include <cassert>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(game[i] - guess[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4}) == vector<int>{2,0,0,1});
    return 0;
}