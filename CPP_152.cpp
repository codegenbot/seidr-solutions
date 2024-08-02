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
    int correct = 0;
    int partiallyCorrect = 0;

    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            correct++;
        } else if (find(game.begin(), game.end(), guess[i]) != game.end()) {
            partiallyCorrect++;
        }
    }

    result.push_back(correct);
    result.push_back(partiallyCorrect);

    return result;
}