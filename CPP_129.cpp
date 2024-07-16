#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for(int i = 0; i < k; ++i){
        for(const auto& row : grid){
            for(int num : row){
                result.push_back(num);
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main(){
    assert(std::equal(minPath({{1, 3}, {3, 2}}, 10).begin(), minPath({{1, 3}, {3, 2}}, 10).end(), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}.begin()));
    
    return 0;
}