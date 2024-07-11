Here is the completed code:

int count_nums(vector<int> v) {
    int count = 0;
    for (int x : v) {
        if (x < 0) {
            x = -x;
        }
        int sum = 0;
        while (x > 0) {
            sum += abs(x % 10);
            x /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}