```
int issame(int a, int b) {
    if (a == b)
        return 1;
    else
        return 0;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
         [](int a, int b) {
             int ones_a = __builtin_popcount(a);
             int ones_b = __builtin_popcount(b);
             if (ones_a == ones_b)
                 return issame(a, b);
             else
                 return ones_a < ones_b;
         });
    return result;
}