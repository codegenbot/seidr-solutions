#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return (a == b);
}

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

int main() {
    assert(isame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}