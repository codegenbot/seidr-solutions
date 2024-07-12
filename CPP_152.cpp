#include <vector>
#include <algorithm>
#include <numeric>

namespace std {

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

}

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result(game.size());
    transform(game.begin(), game.end(), guess.begin(), result.begin(),
                   [](int g, int gu) { return abs(g - gu); });
    vector<int> sortedResult = result;
    sort(sortedResult.begin(), sortedResult.end());
    int sum = accumulate(sortedResult.begin(), sortedResult.end(), 0);
    return {sortedResult.front(), sortedResult.back(), sum};
}