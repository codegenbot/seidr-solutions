int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sumOfDigits = 0;
        int temp = abs(num);
        while (temp != 0) {
            sumOfDigits += temp % 10;
            temp /= 10;
        }
        if (num < 0) {
            sumOfDigits *= -1;
        }
        if (sumOfDigits > 0) {
            count++;
        }
    }
    return count;
}