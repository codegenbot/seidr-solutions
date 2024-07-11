int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int absNum = abs(num);
        int sumOfDigits = 0;
        while (absNum > 0) {
            sumOfDigits += absNum % 10;
            absNum /= 10;
        }
        if (sumOfDigits > 0) {
            count++;
        }
    }
    return count;
}