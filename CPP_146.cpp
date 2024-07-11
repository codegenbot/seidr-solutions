int count = 0;
    for (int num : nums) {
        string num_str = to_string(abs(num));
        if (num_str.front() % 2 == 1 && num_str.back() % 2 == 1 && abs(num) > 10) {
            count++;
        }
    }
    return count;
}