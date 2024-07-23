```cpp
#include <vector>
#include <algorithm>
#include <bitset>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b){
        if (bitset<32>(a).count() != bitset<32>(b).count())
            return bitset<32>(a).count() < bitset<32>(b).count();
        else
            return a < b;
    });
    return arr;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}