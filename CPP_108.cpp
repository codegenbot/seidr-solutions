int count_nums(vector<int> n){
        int count = 0;
        for (int num : n) {
            int sum = 0;
            int numTemp = abs(num);
            while (numTemp != 0) {
                sum += numTemp % 10;
                numTemp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
        return count;
    }