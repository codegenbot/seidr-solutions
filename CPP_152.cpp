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
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == vector<int>{2, 0, 0, 1});
    return 0;
}