#include <vector>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(game[i] - guess[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(vector<int> a,vector<int> b){
    if(a==b){
        return true;
    }else{
        return false;
    }
}

int main() {
    assert (issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    assert (issame(compare({1,3,2,4,5},{1,2,3,4,5}),{0,1,1,0,0}));
    return 0;
}