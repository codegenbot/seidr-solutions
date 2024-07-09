int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            num = -num; // Convert to positive for calculation
            int sum = 0;
            bool negFound = false;
            while (num > 0) {
                if (!negFound && num % 10 < 0) { // Found the first negative digit
                    negFound = true;
                    sum -= num % 10; // Subtract from total sum
                } else {
                    sum += num % 10; // Add to total sum
                }
                num /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}