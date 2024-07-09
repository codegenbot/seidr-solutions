#include <vector>
#include <iostream>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    vector<int> game, guess;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        game.push_back(temp);
        temp = 0;
        cin >> temp;
        guess.push_back(temp);
    }
    vector<int> output = compare(game, guess);
    for(auto x:output) cout << x << " ";
    return 0;
}