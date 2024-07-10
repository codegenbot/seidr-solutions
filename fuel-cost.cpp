int solve(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3 - 2;
        sum += temp;
    }
    return sum;
}