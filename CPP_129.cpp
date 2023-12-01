#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k);

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    for(int i = 0; i < k; i++){
        path.push_back(grid[row][col]);
        
        if((row + col) % 2 == 0){
            if(col == n - 1){
                row++;
            }else{
                col++;
            }
        }else{
            if(row == 0){
                col++;
            }else{
                row--;
            }
        }
    }
    
    return path;
}