#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * sum;

}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }
    int result = prod_signs(arr);
    std::cout << "Product of signs and sum: " << result << std::endl;
    return 0;
}