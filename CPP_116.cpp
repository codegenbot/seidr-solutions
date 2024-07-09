Here is the completed code:

vector<int> sort_array(vector<int> arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(),
        [](int a, int b) {
            if (bitset<32>(a).count() == bitset<32>(b).count()) {
                return a < b;
            } else {
                return bitset<32>(a).count() < bitset<32>(b).count();
            }
        });
    return sorted_arr;
}