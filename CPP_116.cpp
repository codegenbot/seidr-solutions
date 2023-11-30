#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
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

int main() {
    assert(issame(sort_vector({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}