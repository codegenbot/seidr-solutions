int N = grid.size();
    int r = 0, c = 0;
    vector<int> path;
    
    while (k > 0) {
        path.push_back(grid[r][c]);
        if ((r + c) % 2 == 0) {
            if (c == N - 1) {
                r++;
            } else if (r == 0) {
                c++;
            } else {
                r--;
                c++;
            }
        } else {
            if (r == N - 1) {
                c++;
            } else if (c == 0) {
                r++;
            } else {
                r++;
                c--;
            }
        }
        k--;
    }
    return path;
}