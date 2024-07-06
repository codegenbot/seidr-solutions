vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        return bitset<32>(a).count() == bitset<32>(b).count() ? a < b : bitset<32>(a).count() < bitset<32>(b).count();
    });
    return arr;
}