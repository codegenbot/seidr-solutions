#include <iostream>
#include <vector>

bool compare(std::vector<int> game, std::vector<int> guess) {
    for(int i = 0; i < game.size();i++){
        if(game[i] != guess[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    
    if(!compare(game,guess)) { 
        cout << "Error: Invalid input. Please check your input again." << endl;
        return 1;
    } else {
        vector<int> res = getCorrectGuess(game, guess);
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    return 0;
}

vector<int> getCorrectGuess(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    int correct = 0;
    int partiallyCorrect = 0;
    for(int i = 0; i < game.size();i++){
        if(game[i] == guess[i]){
            correct++;
        } else if(guess[i] > game[i]) {
            for(int j = i+1; j < game.size();j++) {
                if(guess[j] > game[j] && !contains(result, j)) {
                    result.push_back(j);
                    break;
                }
            }
        } else {
            for(int j = i+1; j < game.size();j++) {
                if(guess[j] < game[j] && !contains(result, j)) {
                    result.push_back(j);
                    break;
                }
            }
        }
    }
    partiallyCorrect = game.size() - correct;
    while(partiallyCorrect--) {
        for(int i = 0; i < game.size();i++){
            if(!contains(result, i) && !contains(guess, game[i])) {
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}

bool contains(vector<int> v, int x) {
    for(auto y:v)if(y==x)return true;
    return false;
}