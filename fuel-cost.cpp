Here is the solution:

int solve(const vector<int>& input) {
    int sum = 0;
    for (int x : input) {
        sum += (x / 3) - 2;
    }
    return sum;
}