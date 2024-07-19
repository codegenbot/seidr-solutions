int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string numStr = to_string(num);
            char firstDigit = numStr.front();
            char lastDigit = numStr.back();
            if ((firstDigit - '0') % 2 != 0 && (lastDigit - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}