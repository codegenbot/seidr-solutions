int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += abs(digit);
                temp /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0, sign_count = 1;
            int temp = -num;
            while (temp != 0) {
                int digit = temp % 10;
                if (digit < 0) sign_count--;
                else sum += abs(digit);
                temp /= 10;
            }
            if (sign_count > 0 && sum > 0) count++;
        }
    }
    return count;
}