#include <iostream>
#include <vector>

int sumEvenAtOddIndices(const std::vector<int>& lst) {
    int sum = 0;
    for (size_t i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n, element;

    // Read the size of the list
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Read the elements of the list
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        lst.push_back(element);
    }

    std::cout << "Sum of even elements at odd indices: " << sumEvenAtOddIndices(lst) << std::endl;
    return 0;
}