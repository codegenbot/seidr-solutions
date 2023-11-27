#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i = 0; i < game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    assert(issame(compare({1,2,3,5}, {-1,2,3,4}), {2,0,0,1}));
    // more test cases
}