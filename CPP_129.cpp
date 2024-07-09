#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> minPath;
    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            minPath.insert(minPath.end(), row.begin(), row.end());
        }
    }
    return minPath;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}