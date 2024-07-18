int res = 0;
        for (auto& row : grid) {
            int cur_fill = 0;
            for (int cell : row) {
                cur_fill += cell;
                if (cur_fill >= capacity) {
                    res += cur_fill / capacity;
                    cur_fill %= capacity;
                }
            }
            res += (cur_fill > 0) ? 1 : 0;
        }
        return res;
    }