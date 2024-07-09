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
    std::vector<int> numbers = {1, 12, 123};
    int result = add_elements(numbers, numbers.size());
    std::cout << "Sum of the elements whose string representation has a length less than or equal to 2 is: " << result << std::endl;
    return 0;
}