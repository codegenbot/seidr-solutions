int search(vector<int> lst) {
        int result = -1;
        for (int num : lst) {
            int freq = count(lst.begin(), lst.end(), num);
            if (num > freq && freq >= num) {
                result = max(result, num);
            }
        }
        return result;
    }