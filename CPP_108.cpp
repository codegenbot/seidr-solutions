int count_nums(vector<int> v) {
    int count = 0;
    for (int x : v) {
        if (x >= 0) {
            int sum = 0;
            int temp = x;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, negSignCount = 0;
            int temp = -x;
            while (temp != 0) {
                if (temp % 10 < 0) {
                    negSignCount++;
                    sum += temp % 10 + 1;
                } else
                    sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}