Here is the solution:

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int temp = n;

    while (temp != 1) {
        if (temp % 2 == 0) {
            temp /= 2;
        } else {
            temp = 3 * temp + 1;
        }
        if (temp % 2 != 0) {
            result.push_back(temp);
        }
    }
    sort(result.begin(), result.end());
    return result;
}