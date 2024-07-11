```cpp
int main() {
    vector<int> game(4);
    cout << "Enter the game numbers: ";
    for (int i = 0; i < game.size(); i++) {
        cin >> game[i];
    }
    
    vector<int> guess(4);
    cout << "Enter your guess numbers: ";
    for (int i = 0; i < guess.size(); i++) {
        cin >> guess[i];
    }
    
    vector<int> result = compare(game, guess);
    cout << "The results are: ";
    for (int i = 0; i < result.size(); i++) {
        if (result[i] == 0) {
            cout << "Matched! ";
        } else {
            cout << "Incorrect. Try again (" << game[i] << " - " << guess[i] << "). ";
        }
    }
    
    return 0;
}