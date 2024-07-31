int search(vector<int> lst) {
        int res = -1;
        for (int i = 1; i <= lst.size(); ++i) {
            int count = 0;
            for (int num : lst) {
                if (num == i) {
                    count++;
                }
            }
            if (count >= i && i > res) {
                res = i;
            }
        }
        return res;
    }