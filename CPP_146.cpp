int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10 && (num % 10) % 2 != 0) { // Check if number is greater than 10 and last digit is odd
            string str = to_string(num);
            if ((str[0] - '0') % 2 != 0) { // Check if first digit is odd
                count++;
            }
        }
    }
    return count;
}