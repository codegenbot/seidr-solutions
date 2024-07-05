int specialFilter(vector<int> nums) {
    auto isOdd = [](int n) { return (n % 2 != 0); };
    int count = 0;
    for (int num : nums) {
        if (num <= 10) continue;
        string str = to_string(abs(num));
        if (isOdd(str.front() - '0') && isOdd(str.back() - '0')) {
            count++;
        }
    }
    return count;
}