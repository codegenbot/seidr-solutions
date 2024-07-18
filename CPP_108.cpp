int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int sign = 1;
        if (num < 0) {
            sign = -1;
            num *= -1;
        }
        while (num > 0) {
            sum += sign * (num % 10);
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}