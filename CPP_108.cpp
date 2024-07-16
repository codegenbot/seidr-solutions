int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        if (num == 0) {
            continue;
        }
        int sum = 0;
        if (num < 0) {
            sum = -(abs(num) % 10);
            num = num / 10;
        }
        while (num != 0) {
            sum += num % 10;
            num = num / 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}