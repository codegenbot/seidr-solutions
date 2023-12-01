#include <vector>
#include <cmath>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // implement the function logic here
    // return true or false based on the condition
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}) == true);
    // add more test cases if needed

    return 0;
}