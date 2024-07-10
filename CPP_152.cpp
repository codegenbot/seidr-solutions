#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    vector<int> game;
    cout << "Enter the number of games: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter score for game " << i + 1 << ": ";
        int score;
        cin >> score;
        game.push_back(score);
    }
    
    vector<int> guess;
    cout << "Enter the number of guesses: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter score for guess " << i + 1 << ": ";
        int score;
        cin >> score;
        guess.push_back(score);
    }
    
    vector<int> diff = compare(game, guess);
    bool same = issame(game, guess);
    
    if (same) {
        cout << "The games and guesses are the same." << endl;
    } else {
        cout << "The games and guesses are different." << endl;
        
        for (int i = 0; i < game.size(); i++) {
            cout << "The difference between the " << i + 1 << " game and guess is: " << diff[i] << endl;
        }
    }
    
    return 0;
}