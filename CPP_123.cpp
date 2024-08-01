Here is the completed code:

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int current = n;

    while (current != 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }
        if (current % 2 != 0) {
            result.push_back(current);
        }
    }
    return result;
}