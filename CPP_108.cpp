int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = num;
            while (abs_num > 0) {
                sum += abs_num % 10;
                abs_num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            bool is_negative = true;
            int temp_num = num;
            int sum = 0;
            while (temp_num != 0) {
                int digit = temp_num % 10;
                if (is_negative)
                    sum -= digit;
                else
                    sum += digit;
                temp_num /= 10;
                is_negative = !is_negative; // toggle the sign of addition
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}