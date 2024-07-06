#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int num, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        vec.push_back(num);
    }
    int sum = 0, count = 0;
    for (int n : vec) {
        if ((n >= 1 && n <= 9) || (n >= -9 && n <= -1)) {
            sum += n;
            count++;
        }
    }
    std::cout << "Sum of numbers between -9 and 9: " << sum << std::endl;
    return 0;
}