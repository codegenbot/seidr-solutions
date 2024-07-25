```
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (bitset<64>(a).count() == bitset<64>(b).count()) {
            return a < b;
        }
        return bitset<64>(a).count() < bitset<64>(b).count();
    });
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    for (int i = 0; i < sortedArr.size(); i++) {
        auto it = equal_range(arr.begin(), arr.end(), sortedArr[i]);
        arr.erase(it.first, it.second);
    }
    return arr;
}