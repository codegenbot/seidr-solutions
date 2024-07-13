#include <iostream>
#include <vector>

int getResult(std::vector<int> game, std::vector<int> guess) {
    int cowans = 0, bulls = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            cowans++;
        } else if (std::find(game.begin(), game.end(), guess[i]) != game.end()) {
            bulls++;
        }
    }
    std::vector<int> res;
    res.push_back(cowans);
    res.push_back(bulls);
    return res;
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
        vector<int> res = getResult(game,guess);
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    return 0;
}