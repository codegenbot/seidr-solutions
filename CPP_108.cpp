int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sumDigits = 0;
        int temp = abs(num);
        while (temp != 0) {
            sumDigits += temp % 10;
            temp /= 10;
        }
        if (num < 0) {
            sumDigits *= -1;
        }
        if (sumDigits > 0) {
            count++;
        }
    }
    return count;
}