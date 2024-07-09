Here is the completed code:

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        if (bit_set(a) == bit_set(b)) {
            return a < b;
        }
        return bit_set(a) < bit_set(b);
    });
    return result;
}

int bit_set(int n) {
    int count = 0;
    while (n > 0) {
        n &= n - 1;
        count++;
    }
    return count;
}