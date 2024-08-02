#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == vector<int>{2, 0, 0, 1});
    assert(compare({3, 8, 4}, {5, 6, 2}) == vector<int>{2, 2, 2});
    return 0;
}