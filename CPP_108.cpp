int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = num;
        if (num < 0) {
            sum += -1 * (num % 10);
            temp = -1 * (num / 10);
        }
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}