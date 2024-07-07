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
    std::vector<int> input;
    int n, k;

    // Read the number of elements and the threshold
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the threshold value: ";
    std::cin >> k;

    // Read the array elements
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }

    int result = add_elements(input, k);

    // Print the sum of elements less than or equal to the threshold
    std::cout << "Sum of elements <= " << k << ": " << result << std::endl;

    return 0;
}