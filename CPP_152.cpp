#include <vector>

using namespace std;

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}