#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    vector<int> game = {1, 2, 3};
    vector<int> guess = {2, 4, 1};
    
    vector<int> difference = compare(game, guess);
    
    for (int num : difference) {
        cout << num << " ";
    }
    
    return 0;
}