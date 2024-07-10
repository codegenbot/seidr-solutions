int capacity = 10;

const int max_fill(int rows, int cols, vector<vector<int>>& grid, int capacity) 
{
    int total_water = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    
    int num_buckets = (total_water + capacity - 1) / capacity;
    
    return num_buckets * rows;
}

const int max_fill(vector<vector<int>> grid, int capacity) 
{
    int rows = grid.size();
    int cols = grid[0].size();

    int total_water = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    
    int num_buckets = (total_water + capacity - 1) / capacity;
    
    return num_buckets * rows;
}