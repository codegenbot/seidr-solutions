#include <vector>
#include <limits>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        dp[i][0] = grid[i][0];
        dp[0][i] = grid[0][i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int minVal = std::numeric_limits<int>::max();
            if (grid[i-1][j] < minVal) minVal = grid[i-1][j];
            if (grid[i][j-1] < minVal) minVal = grid[i][j-1];
            dp[i][j] = minVal;
        }
    }
    std::vector<int> res(k);
    int cur = std::numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == cur) {
                for(int x=0;x<k;x++){
                    res[x] = grid[i][j];
                }
                return res;
            }
        }
    }
    return {};
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}


int main() {
    int n,k;
    cin >> n >> k;
    
    std::vector<std::vector<int>> grid(n);
    for (int i = 0; i < n; i++) {
        grid[i].resize(k+1);
        for(int j=0;j<=k;j++){
            cin >> grid[i][j];
        }
    }
    
    std::vector<int> res = minPath(grid, k);
    if(!res.empty()) {
        cout << "Minimum Path is ";
        for(auto x:res) cout<<x<<" ";
        cout<<endl;
    } else {
        cout << "No Minimum Path found." << endl;
    }
    return 0;
}