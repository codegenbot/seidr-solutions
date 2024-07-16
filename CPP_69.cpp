int search(vector<int> lst) {
        int res = -1;
        for (int num : lst) {
            int freq = 0;
            for (int val : lst) {
                if (val == num) {
                    freq++;
                }
            }
            if (num > freq && freq >= res) {
                res = num;
            }
        }
        return res;
    }