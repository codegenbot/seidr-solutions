#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    if (!issame(game, guess)) {
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                result.push_back(0);
            } else {
                result.push_back(abs(game[i] - guess[i]));
            }
        }
    } else {
        vector<int> black(3, 0), white(1, 0);
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                black[0]++;
            } else if ((abs(game[i] - guess[i])) == 1) {
                white[0]++;
            } else {
                int pos = abs(game[i] - guess[i]) % 3;
                black[pos]++;
            }
        }
        result = vector<int>(black.begin(), black.end());
    }
    return result;
}