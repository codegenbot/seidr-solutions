#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count((long long)a, 1) == count((long long)b, 1)) {
            return a < b;
        }
        return count((long long)a, 1) < count((long long)b, 1);
    });
    return arr;
}