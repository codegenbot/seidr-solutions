#include <vector>

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(game[i] - guess[i]);
        result.push_back(diff);
    }
    return result;
}

vector<int> issame(vector<int> a, vector<int> b){
    vector<int> result;
    // code to compare a and b and populate result vector
    return result;
}

int main(){
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    // additional test cases
    return 0;
}