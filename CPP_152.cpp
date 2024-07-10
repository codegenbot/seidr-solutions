bool issame(vector<int> a,vector<int>b){
    return (a==b);
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for(int i=0; i<n; i++){
        cin >> game[i] >> guess[i];
    }
    bool same = issame(game,guess);
    if(same){
        cout << "Game and Guess are the same.\n";
    }else{
        vector<int> compare_game_guess = compare(game,guess);
        for(int num : compare_game_guess) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}