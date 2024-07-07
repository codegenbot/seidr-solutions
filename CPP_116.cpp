Here is the completed code:

vector<int> sort_array(vector<int> arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end(), [](int a, int b) {
        if (bitset<64>(a).count() == bitset<64>(b).count()) {
            return a < b;
        }
        return bitset<64>(a).count() < bitset<64>(b).count();
    });
    return sortedArr;
}