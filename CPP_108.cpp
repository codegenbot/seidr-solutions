int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int sign = (num < 0) ? -1 : 1;
        num *= sign;
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