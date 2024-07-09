#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int n = grid.size();
    std::vector<int> result;
    for(int i=0; i<n; i++){
        if(grid[i][0] <= k){
            k -= grid[i][0];
            result.push_back(grid[i][0]);
        }
        else{
            break;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}