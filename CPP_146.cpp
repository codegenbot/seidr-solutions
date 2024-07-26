int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string str = to_string(abs(num));
            int firstDigit = str[0] - '0';
            int lastDigit = str[str.size() - 1] - '0';
            if (firstDigit % 2 != 0 && lastDigit % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}