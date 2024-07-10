int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int x = (i / 3);
        int y = floor(x);
        sum += (y - 2);
    }
    return sum;
}