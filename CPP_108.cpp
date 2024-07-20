int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool first_negative = false;
        if (num < 0) {
            do {
                sum -= abs(num) % 10;
                num /= 10;
            } while (num > 0);
            if (sum == 0) continue;
        }
        else {
            do {
                sum += num % 10;
                num /= 10;
            } while (num > 0);
        }
        if (sum > 0) count++;
    }
    return count;
}