#include <vector>
#include <string>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Test the function
    assert(add_elements({1}, 1) == 1);
    return 0;
}