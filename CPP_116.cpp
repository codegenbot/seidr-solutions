```c++
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (bitset<32>(a).count() == bitset<32>(b).count()) {
            return a < b;
        }
        return bitset<32>(a).count() < bitset<32>(b).count();
    });
    return arr;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}