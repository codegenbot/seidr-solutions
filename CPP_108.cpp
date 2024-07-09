Here is the completed code:

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int signed_sum = 0;
        bool has_negative = false;
        while (num != 0) {
            int digit = abs(num % 10);
            if (digit > 5)
                digit -= 6;
            if (num < 0 && digit == 5)
                has_negative = true;
            num /= 10;
            signed_sum += digit;
        }
        if (signed_sum > 0 || has_negative) {
            count++;
        }
    }
    return count;