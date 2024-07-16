int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string str_num = to_string(num);
            if ((str_num.front() - '0') % 2 != 0 && (str_num.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}