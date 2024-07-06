Here is the completed code:

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        if (bitset<32>(a).count() == bitset<32>(b).count()) {
            return a < b;
        }
        return bitset<32>(a).count() < bitset<32>(b).count();
    });
    return arr;
}