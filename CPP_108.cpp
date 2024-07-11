int count_nums(vector<int> n){
        int count = 0;
        for (int num : n) {
            int sum = 0;
            int x = num;

            if (x < 0) x = -num;
            
            while (x != 0) {
                sum += abs(x % 10);
                x /= 10;
            }

            if (sum > 0) {
                count++;
            }
        }
        return count;
    }