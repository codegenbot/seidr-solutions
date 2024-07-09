int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        int firstDigit = abs(to_string(num)[0] - '0');
        int lastDigit = abs(to_string(num).back() - '0');
        if (num > 10 && (firstDigit % 2 != 0) && (lastDigit % 2 != 0)) {
            count++;
        }
    }
    return count;
}