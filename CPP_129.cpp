vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int startX = 0, startY = 0;
    int currentX = startX, currentY = startY;
    int count = 0;
    
    while(count < k){
        path.push_back(grid[currentX][currentY]);
        count++;
        
        if(currentX % 2 == 0){
            if(currentY < m-1){
                currentY++;
            }
            else{
                currentX++;
            }
        }
        else{
            if(currentY > 0){
                currentY--;
            }
            else{
                currentX++;
            }
        }
    }
    
    return path;
}