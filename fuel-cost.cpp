int solve(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        double val = static_cast<double>(i) / 3;
        int new_val = floor(val) - 2;
        sum += new_val;
    }
    return sum;