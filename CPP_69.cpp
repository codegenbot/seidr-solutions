int search(vector<int> lst) {
        int maxVal = -1;
        for (int num : lst) {
            if (num <= maxVal)
                continue;
            int freq = 0;
            for (int val : lst) {
                if (val == num) {
                    freq++;
                    if (freq >= num) {
                        maxVal = num;
                        break;
                    }
                }
            }
        }
        return maxVal;
    }