#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);

        if (ones_a == ones_b)
            return a < b;
        else
            return ones_a < ones_b;
    });
    return result;
}

int main() {
    vector<int> sorted_array = sort_array({2, 4, 8, 16, 32});
    assert(issame(sorted_array, {2, 4, 8, 16, 32}));
    return 0;