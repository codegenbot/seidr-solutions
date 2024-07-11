```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> compare(vector<vector<int>> gameGuessList) {
    vector<vector<int>> result;
    
    for(int i = 0; i < gameGuessList.size(); i++) {
        vector<int> game, guess;
        
        // Separate game and guess from the pair
        for(int j = 0; j < 2; j++) {
            if(j == 0) {
                game = gameGuessList[i];
            }
            else {
                guess = gameGuessList[i];
            }
        }

        vector<int> temp;
        
        // Compare game and guess and store the result
        for(int k = 0; k < game.size(); k++) {
            if(game[k] == guess[k]) {
                temp.push_back(0);
            } else {
                temp.push_back(abs(game[k] - guess[k]));
            }
        }
        
        // Add the temporary result to final result
        result.push_back(temp);
    }
    
    return result;
}

int main() {
    assert(issame(compare({{1, 2, 3, 5}, {-1, 2, 3, 4}}), {{2, 0, 0, 1}}));
    return 0;
}