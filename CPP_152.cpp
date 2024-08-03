#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool vector_equal(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert(vector_equal(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    
    return 0;
}