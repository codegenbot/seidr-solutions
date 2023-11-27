#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i = 0; i < game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // implementation here
}

int main() {
    assert(issame(compare({1,2,3,5}, {-1,2,3,4}), {2,0,0,1}));
    // more test cases
    return 0;
}