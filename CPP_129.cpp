#include <iostream>
#include <vector>
#include <queue>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    std::vector<std::vector<bool>> visited(n, std::vector<bool>(n));
    std::priority_queue<std::pair<int, std::pair<int, int>>, std::vector<std::pair<int, std::pair<int, int>>>, std::greater<std::pair<int, std::pair<int, int>>>> pq;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                pq.push({1, {i, j}});
                visited[i][j] = true;
            }
        }
    }

    std::vector<int> path;
    while(!pq.empty() && path.size() < k){
        int val = pq.top().first;
        std::pair<int, int> pos = pq.top().second;
        pq.pop();
        
        if(path.size() > 0){
            if(val != path.back()){
                return {};
            }
        }
        
        path.push_back(val);
        
        std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        //random_shuffle(directions.begin(), directions.end());
        for(auto dir : directions){
            int ni = pos.first + dir.first;
            int nj = pos.second + dir.second;
            
            if(ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]){
                visited[ni][nj] = true;
                pq.push({grid[ni][nj], {ni, nj}});
            }
        }
    }

    return path;
}