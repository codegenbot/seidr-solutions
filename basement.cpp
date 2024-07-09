#include <vector>

int basement(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0)
            return i + 1; // Return the first index where the sum is negative
    }
    return -1; // If no such index exists, return -1
}