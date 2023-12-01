#include <vector>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Test the add_elements() function here
    return 0;
}