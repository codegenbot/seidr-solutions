#include <vector>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSingle(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Calculate row and column sums for optimization
        vector<int> rowSums(n);
        vector<int> colSums(n);
        
        for (int i = 0; i < n; i++) {
            rowSums[i] = 0;
            colSums[i] = 0;
            for (int j = 0; j < n; j++) {
                rowSums[i] += grid[i][j];
                colSums[j] += grid[i][j];
            }
        }
        
        int totalIncrease = 0;
        
        // Calculate maximum possible increase and sum of increases
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < n - 1; j++) {
                totalIncrease += min(rowSums[i], colSums[j]) - grid[i][j];
            }
        }
        
        return totalIncrease;
    }
};