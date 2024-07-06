#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int minPath(vector<vector<int>>& grid, int k) {
    if(k > 3)
        assert(issame({1,2,3}, {4,5,6}) || "Error: Value of k is greater than 3");
    else
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] <= k)
                    return k;
    
    return -1;
}

int main() {
    std::vector<std::vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    std::vector<int> result = minPath(grid, k);
    for (auto val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}