#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    auto compare = [k](const vector<int>& a, const vector<int>& b) {
        return vector<int>(a.begin(), a.begin() + k) > vector<int>(b.begin(), b.begin() + k);
    };
    
    priority_queue<vector<int>, vector<vector<int>>, decltype(compare)> pq(compare);
    pq.push({grid[0][0], 0, 0});
    
    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();
        
        if (current.size() == k + 2) {
            return vector<int>(current.begin(), current.begin() + k);
        }
        
        int x = current[current.size() - 2];
        int y = current.back();
        
        for (auto& dir : directions) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> nextPath = current;
                nextPath.insert(nextPath.end() - 2, grid[nx][ny]);
                nextPath[nextPath.size() - 2] = nx;
                nextPath.back() = ny;
                pq.push(nextPath);
            }
        }
    }
    
    return {};
}