vector<int> sort_array(vector<int> arr){
    auto count_ones = [](int x) {
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    };

    sort(arr.begin(), arr.end(), [&](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) return a < b;
        return ones_a < ones_b;
    });

    return arr;
}