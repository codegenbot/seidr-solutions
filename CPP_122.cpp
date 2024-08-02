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
    std::vector<int> arr = {1, 2, 3};
    int k = arr.size();
    int result = add_elements(arr, k);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}