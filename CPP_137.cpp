```cpp
int maxIncreaseKeepingSingle(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        std::string temp;
        for (int j = 0; j < n; j++) {
            temp += to_string(grid[i][j]) + " ";
        }
        std::sort(temp.begin(), temp.end());
        grid[i] = vector<int>();
        istringstream iss(temp);
        int val;
        while (iss >> val) {
            grid[i].push_back(val);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1) {
                continue;
            }
            sum += grid[i][j];
        }
    }
    
    return sum;
}