#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    if(grid.empty() || grid[0].empty())
        return result;

    while(k > 0){
        for(const auto& row : grid){
            for(const auto& num: row){
                result.push_back(num);
                k--;
                if(k == 0)
                    break;
            }
            if(k == 0)
                break;
        }
    }
    
    return result;
}

int main(){
    assert (issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}