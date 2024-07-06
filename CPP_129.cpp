#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        int minVal = *min(grid[0].begin(), grid[0].end());
        result.push_back(minVal);
        for(int j = 0; j < grid.size(); j++) {
            for(int z = 0; z < grid[j].size(); z++) {
                if(grid[j][z] == minVal) {
                    grid[j].erase(z);
                    if(i == k-1) {
                        break;
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    std::vector<int> result = minPath(grid, k);
    for (auto val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}