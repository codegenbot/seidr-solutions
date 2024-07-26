int count = 0;
    for (int num : nums) {
        string numStr = to_string(abs(num));
        int firstDigit = numStr.front() - '0';
        int lastDigit = numStr.back() - '0';
        if (num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0) {
            count++;
        }
    }
    return count;
}