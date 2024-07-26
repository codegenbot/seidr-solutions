int count = 0;
    for (int num : nums) {
        string strNum = to_string(abs(num));
        if (strNum.front() % 2 != 0 && strNum.back() % 2 != 0 && abs(num) > 10) {
            count++;
        }
    }
    return count;
}