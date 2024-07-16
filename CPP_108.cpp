int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        if (num < 0) {
            sum += -num;
        } else {
            sum += num;
        }
        while (sum > 9) {
            sum = sum/10 + sum%10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}