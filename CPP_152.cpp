#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result(game.size());
    transform(game.begin(), game.end(), guess.begin(), result.begin(),
              [](int a, int b) { return abs(a - b); });
    return result;
}