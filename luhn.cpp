int luhn(vector<int>& nums) {
    int sum = 0;
    bool odd = false;
    for (auto i : nums) {
        if (odd) {
            i *= 2;
            if (i > 9)
                i -= 9;
        }
        sum += i;
        odd = !odd;
    }
    return sum;
}