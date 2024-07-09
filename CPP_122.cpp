```
#include <vector>
#include <string>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 1);
    std::vector<int> input;
    int k;
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < k; i++) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    std::cout << "Sum of elements with length <= 2 is: " << add_elements(input, k) << std::endl;
    return 0;
}