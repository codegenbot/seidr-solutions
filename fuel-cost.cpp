int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        if (i % 3 == 0) {
            int temp = i / 3 - 2;
            sum += temp;
        } else {
            int temp = (i - 1) / 3 - 2 + 1;
            sum += temp;
        }
    }
    return sum;