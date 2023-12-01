#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int row = 0, col = 0;
    int dir = 0;
    
    while(k > 0){
        path.push_back(grid[row][col]);
        k--;
        
        if(dir == 0){
            if(col + 1 < m){
                col++;
            }
            else{
                row++;
            }
        }
        else{
            if(col - 1 >= 0){
                col--;
            }
            else{
                row++;
            }
        }
        
        if(row >= n){
            row--;
            dir = 1 - dir;
        }
    }
    
    return path;
}

int main() {
    vector<int> expectedPath = {1, 3, 1, 3, 1, 3, 1, 3, 1, 3};
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), expectedPath));

    return 0;
}