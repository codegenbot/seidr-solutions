int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            int cur = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    cur++;
                    if (cur == capacity) {
                        ans++;
                        cur = 0;
                    }
                }
            }
            ans += cur;
        }
        return ans;