int count_nums(vector<int> n){
        int count = 0;
        for (int num : n) {
            int sum = 0;
            int original_num = num;
            if (num < 0) {
                num *= -1;
                sum -= original_num;
            }
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
        return count;
    }