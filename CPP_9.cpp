```cpp
#include <vector>
#include <limits>

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN;
    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }
    return result;
}

int main() {
    assert(isSame(rolling_max({3, 2, 3, 100, 3}) ,{3, 3, 3, 100, 100}));
    return 0;
}