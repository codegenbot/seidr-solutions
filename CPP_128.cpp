#include <algorithm>
#include <vector>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num != 0) {
            product *= (num > 0 ? 1 : -1);
        }
    }
    
    return arr.empty() ? INT_MIN : product * std::accumulate(arr.begin(), arr.end(), 0, [](int sum, int num) { return sum + abs(num); });
}