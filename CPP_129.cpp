#include <vector>
#include <cassert>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for(const std::vector<int>& row : grid){
        if(row[0] <= k){
            k -= row[0];
            result.push_back(row[0]);
        }
        else{
            break;
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<std::vector<int>> grid = {{3, 1}, {5, 2}, {7, 3}};
    int k = 8;
    std::vector<int> expected = {3, 5};
    
    std::vector<int> actual = minPath(grid, k);
    assert(issame(actual, expected));
    
    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3}));
    
    return 0;
}