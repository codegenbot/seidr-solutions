int solve(vector<int>& v) {
    int sum = 0;
    for (int x : v) {
        int y = floor((double)x / 3) - 2;
        sum += y;
    }
    return sum;
}