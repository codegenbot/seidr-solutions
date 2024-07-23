#include <vector>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(vector<int> a, vector<int> b);

int main() {
    vector<int> game = {1, 2, 3};
    vector<int> guess = {2, 3, 4};
    
    vector<int> difference = compare(game, guess);
    
    for (int i = 0; i < difference.size(); ++i) {
        cout << difference[i] << " ";
    }
    
    return 0;
}