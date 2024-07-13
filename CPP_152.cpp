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
        vector<int> res = getResult(game,guess);
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    return 0;
}