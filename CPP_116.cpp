sort_array({1, 5, 2, 3, 4}) == {1, 2, 3, 4, 5}  // Returns: {1, 2, 3, 4, 5}
sort_array({-2, -3, -4, -5, -6}) == {-6, -5, -4, -3, -2}  // Returns: {-6, -5, -4, -3, -2}
sort_array({1, 0, 2, 3, 4}) == {0, 1, 2, 3, 4}  // Returns: {0, 1, 2, 3, 4}
*/

vector<int> sort_array(vector<int> arr){
    auto count_ones = [](int num) {return __builtin_popcount(num);};
    auto cmp = [count_ones](int a, int b) {
        int count_a = count_ones(a), count_b = count_ones(b);
        if (count_a == count_b) return a < b;
        return count_a < count_b;
    };
    sort(arr.begin(), arr.end(), cmp);
    return arr;
}