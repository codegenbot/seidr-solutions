#include <vector>

vector<int> compare(vector<int> game, vector<int> guess);
bool issame(vector<int> a, vector<int> b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Rest of the function implementation...
}

int main() {
    // Rest of the code...
}