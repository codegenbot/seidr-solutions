#include <vector>
#include <algorithm>

std::vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    // Return only last 'k' elements of the array
    return vector<int>(arr.rbegin(), arr.rbegin() + k);
}