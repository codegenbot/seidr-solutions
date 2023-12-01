int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num); // get absolute value of num
        while (temp != 0) {
            sum += temp % 10; // get last digit and add it to sum
            temp /= 10; // remove last digit
        }
        if (sum > 0) {
            count++; // increment count if sum of digits is greater than 0
        }
    }
    return count;
}