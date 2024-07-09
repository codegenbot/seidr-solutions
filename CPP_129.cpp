#include <vector>
#include <cassert>

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

int main(){
    std::vector<std::vector<int>> grid = {{3, 1}, {5, 2}, {7, 3}};
    int k = 8;
    std::vector<int> expected = {3, 5};
    
    std::vector<int> actual = minPath(grid, k);
    assert(issame(actual, expected));
    
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}