#include <vector>
#include <algorithm>

using namespace std;

int main() {
    assert(is_same(sort_vector({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
}

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
         [](int a, int b) {
             int ones_a = __builtin_popcount(a);
             int ones_b = __builtin_popcount(b);
             if (ones_a == ones_b)
                 return a < b;
             else
                 return ones_a < ones_b;
         });
    return result;
}