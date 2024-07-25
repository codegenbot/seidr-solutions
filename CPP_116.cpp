int count_ones(int num) {
    int ones = __builtin_popcount(num);
    return ones;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
         [](int a, int b) {
             int ones_a = count_ones(a);
             int ones_b = count_ones(b);
             if (ones_a == ones_b)
                 return a < b;
             else
                 return ones_a < ones_b;
         });
    return result;
}