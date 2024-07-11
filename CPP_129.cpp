int N = grid.size();
    vector<int> result;
    int r = 0, c = 0;
    while(k > 0){
        result.push_back(grid[r][c]);
        if((r + c) % 2 == 0){
            if(c == N - 1) r++;
            else if(r == 0) c++;
            else if(grid[r-1][c] > grid[r][c+1]) c++;
            else r--;
        }
        else{
            if(r == N - 1) c++;
            else if(c == 0) r++;
            else if(grid[r][c-1] > grid[r+1][c]) r++;
            else c--;
        }
        k--;
    }
    return result;
}