```
#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (log10(static_cast<double>(arr[i])) < 2.0) {
            sum += arr[i];
        }
    }
    return sum;
}