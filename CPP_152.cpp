#include <vector>
#include <algorithm>
bool issame(vector<int> a,vector<int>b){
    return (a==b);
}
vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(vector<int>(game.begin(), game.end()), vector<int>(guess.begin(), guess.end()))) {
            result.push_back(2);
        } else if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}