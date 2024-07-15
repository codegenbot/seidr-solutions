int count = 0;
    for (int num : nums) {
        string numStr = to_string(abs(num));
        if (numStr.front() % 2 != 0 && numStr.back() % 2 != 0 && abs(num) > 10) {
            count++;
        }
    }
    return count;
}