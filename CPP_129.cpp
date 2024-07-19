#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    if(k <= 0 || grid.empty() || grid[0].empty())
        return result;
    
    for(int i = 1; i < grid.size(); ++i){
        grid[i][0] += grid[i - 1][0];
    }
    
    for(int j = 1; j < grid[0].size(); ++j){
        grid[0][j] += grid[0][j - 1];
    }
    
    for(int i = 1; i < grid.size(); ++i){
        for(int j = 1; j < grid[i].size(); ++j){
            grid[i][j] += std::min(grid[i - 1][j], grid[i][j - 1]);
        }
    }
    
    int i = grid.size() - 1;
    int j = grid[0].size() - 1;
    while(i >= 0 && j >= 0){
        result.insert(result.begin(), grid[i][j]);
        if(i == 0){
            j--;
        }
        else if(j == 0){
            i--;
        }
        else{
            if(grid[i - 1][j] < grid[i][j - 1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    
    return result.size() <= k ? result : std::vector<int>();
}