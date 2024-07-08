using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            for (int j = abs(guess[i] - game[i]); j > 0; --j)
                result.push_back(1);
            for (int k = abs(guess[i] - game[i]); k > 0; --k)
                result.push_back(0);
        }
    }
    return result;
}