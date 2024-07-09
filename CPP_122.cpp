```cpp
#include <vector>
#include <string>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> v1 = {1, 2, 3, 4};
    int k = 4;
    int result = add_elements(v1, k);
    return 0;
}