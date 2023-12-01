#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Test the add_elements() function
    std::vector<int> arr = {5, 15, 25, 35, 45};
    int k = 3;
    int result = add_elements(arr, k);
    return 0;
}