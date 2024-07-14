Here is the solution:

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        double d = static_cast<double>(i) / 3;
        int newInt = floor(d) - 2;
        sum += newInt;
    }
    return sum;