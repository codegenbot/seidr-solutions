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

    return count;
}