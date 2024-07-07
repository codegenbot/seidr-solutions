```cpp
#include <iostream>
#include <vector>
#include <queue>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k);
bool issame(const std::vector<int>& a, const std::vector<int>& b);

struct pair_int {
    int val;
    int i;
    int j;
};

bool operator>(const pair_int &a, const pair_int &b) {
    return a.val > b.val;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool operator>(const pair_int &a, const pair_int &b) {
    return a.val > b.val;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq; 
    std::vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pair_int p = {grid[i][j], i, j};
            pq.push(std::make_pair(p.val, std::make_pair(i, j)));
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        int pos_i = pq.top().second.first;
        int pos_j = pq.top().second.second;
        pq.pop();

        res.push_back(grid[pos_i][pos_j]);

        if (k > 0) {
            --k;

            // Check all neighbors
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int ni = pos_i + i;
                    int nj = pos_j + j;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        pair_int p = {grid[ni][nj], ni, nj};
                        pq.push(std::make_pair(p.val, std::make_pair(ni, nj)));
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
    
    assert(issame({1, 3, 1, 3, 1, 3, 1, 3, 1, 3}, minPath({{1, 3}, {3, 2}}, 10)));
    
    return 0;
}