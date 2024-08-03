#include <vector>
using namespace std;

size_t smallest_change(const vector<int>& arr) {
    size_t n = arr.size();
    if (n == 0) {
        return 0;
    }
    
    size_t changes = 0;
    for (size_t i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}