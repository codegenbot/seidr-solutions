#include <vector>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(game[i] - guess[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Implement your logic here
}

int main() {
    // Test cases
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));

    return 0;
}