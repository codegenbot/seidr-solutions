int count = 0;
    for (int num : nums) {
        string str = to_string(abs(num));
        if (str.front() % 2 != 0 && str.back() % 2 != 0 && num > 10) {
            count++;
        }
    }
    return count;
}