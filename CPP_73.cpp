#include <iostream>
#include <vector>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    if (n % 2 == 1) { // If the length is odd, return 0 immediately
        return 0;
    }
    int count = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            count++;
        }
    }

    // Add another loop to iterate over the second half of the array
    for (int j = n / 2; j < n; j++) {
        if (arr[j] != arr[n - j - 1]) {
            count++;
        }
    }

    return count;
}