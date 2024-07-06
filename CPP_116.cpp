vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        if (bit_count(a) == bit_count(b)) {
            return a < b;
        } else {
            return bit_count(a) < bit_count(b);
        }
    });
    return result;
}

int bit_count(int n) {
    int count = 0;
    while (n > 0) {
        n &= n - 1;
        count++;
    }
    return count;
}