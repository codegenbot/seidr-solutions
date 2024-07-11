int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string num_str = to_string(num);
            if ((num_str[0] - '0') % 2 != 0 && (num_str[num_str.size() - 1] - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}