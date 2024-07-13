int solve(const vector<int>& v) {
    int sum = 0;
    for (int num : v) {
        if (num % 3 == 0) {
            int result = (num / 3) - 2;
            sum += result;
        }
    }
    return sum;
}