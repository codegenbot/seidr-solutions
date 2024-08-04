#include <vector>
#include <iostream>

using namespace std;

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for (int i = 0; i < k; ++i){
        result.push_back(grid[i / 2][i % 2]);
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> grid = {{1, 3}, {3, 2}};
    int k = 4;
    
    std::vector<int> result = minPath(grid, k);
    
    for (int val : result) {
        cout << val << " ";
    }
    
    return 0;
}