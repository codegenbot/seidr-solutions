int count = 0;
    for (int num : nums) {
        string str_num = to_string(abs(num));
        if (str_num.front() % 2 != 0 && str_num.back() % 2 != 0 && abs(num) > 10) {
            count++;
        }
    }
    return count;
}