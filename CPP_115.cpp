int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (vector<int> w : grid) {
        int water = 0;
        bool flag = false;
        for (int h : w) {
            if (h > 0) {
                water += min(h, capacity);
                flag = true;
            } else if (flag) {
                res++;
                flag = false;
            }
        }
    }
    return res;
}