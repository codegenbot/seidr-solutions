#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count1 = __builtin_popcount(a);
        int count2 = __builtin_popcount(b);
        if (count1 == count2) {
            return a < b;
        }
        return count1 < count2;
    });
    return arr;
}

int main() {
    assert(issame(sort_vector({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}