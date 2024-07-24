Here is the solution:

int solve(vector<int>& arr) {
    int sum = 0;
    for (int i : arr) {
        int temp = (i / 3) - 2;
        sum += temp;
    }
    return sum;
}