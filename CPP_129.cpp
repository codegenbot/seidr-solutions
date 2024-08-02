#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i){
        if (a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    int total_elements = grid.size() * grid[0].size();
    int repetitions = k / total_elements;
    int remainder = k % total_elements;
    
    for (int i = 0; i < repetitions; ++i){
        for (const auto& row : grid){
            for (int num : row){
                result.push_back(num);
            }
        }
    }
    
    for (int i = 0; i < remainder; ++i){
        result.push_back(grid[i / grid[0].size()][i % grid[0].size()]);
    }
    
    return result;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}) == true);
    
    return 0;
}