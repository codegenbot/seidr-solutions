#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result(game.size());
    transform(game.begin(), game.end(), guess.begin(), result.begin(), 
              [](int a, int b) { return abs(a - b); });
    return result;
}

int main() {
    assert(compare({8, 5, 3, 7}, {5, 2, 3, 4}) == vector<int>{3, 3, 0, 3});
    return 0;
}