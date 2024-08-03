#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        if (countBits(a) == countBits(b)) {
            return a < b;
        }
        return countBits(a) < countBits(b);
    });
    return result;
}

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= n - 1;
        count++;
    }
    return count;
}