#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}