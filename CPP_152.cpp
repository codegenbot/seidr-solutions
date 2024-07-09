```cpp
#include <vector>

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> game(n);
    for(int i=0;i<n;i++){
        cin >> game[i];
    }
    
    vector<int> guess(n);
    for(int i=0;i<n;i++){
        cin >> guess[i];
    }
    
    if(issame(game,guess)){
        cout << "Game and Guess are the same" << endl;
    } else {
        vector<int> res = compare(game, guess);
        for(auto x : res){
            cout << x << " ";
        }
        cout << endl;
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