#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (bitset<64>(a).count() != bitset<64>(b).count())
            return bitset<64>(a).count() < bitset<64>(b).count();
        else
            return a < b;
    });
    return arr;
}