vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        if (bitset<32>(a).count() == bitset<32>(b).count()) {
            return a < b;
        }
        return bitset<32>(a).count() < bitset<32>(b).count();
    });
    return result;
}