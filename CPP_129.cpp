```cpp
#include <iostream>
#include <vector>
#include <queue>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k);
struct pair_int {
    int val;
    int i;
    int j;

    pair_int(int v = 0, int ii = -1, int jj = -1) : val(v), i(ii), j(jj) {}
};

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    std::priority_queue<pair_int, std::vector<pair_int>, greater<pair_int>> pq; 
    std::vector<int> res;
    int size = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pair_int p = {grid[i][j], i, j};
            pq.push(p);
        }
    }

    while (!pq.empty()) {
        int val = pq.top().val;
        int pos_i = pq.top().i;
        int pos_j = pq.top().j;
        pq.pop();

        if (size < k) {
            res.push_back(grid[pos_i][pos_j]);
            size++;
        }

        if (k > 0) {
            // Check all neighbors
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int ni = pos_i + i;
                    int nj = pos_j + j;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        pair_int p = {grid[ni][nj], ni, nj};
                        pq.push(p);
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}

int main() 
{
    std::vector<std::vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    std::vector<int> result = minPath(grid, k);

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    for (int i = 0; i < result.size(); ++i) {
        assert(result[i] == 1 || result[i] == 3);
    }
    
    return 0;
}