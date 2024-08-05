#include <vector>
#include <queue>
#include <set>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k);

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}