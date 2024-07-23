#include <iostream>
#include <vector>

bool filter_integers(std::vector<int> inputVector) {
    std::vector<int> evenNumbers;
    for (int i = 0; i < inputVector.size(); i++) {
        if (inputVector[i] % 2 == 0) {
            evenNumbers.push_back(inputVector[i]);
        }
    }
    return evenNumbers.empty() ? false : true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> inputVector(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        inputVector[i] = num;
    }

    std::vector<int> filteredVector = filter_integers(inputVector);

    if (std::equal(filteredVector.begin(), filteredVector.end(), inputVector.begin())) {
        std::cout << "The even numbers are the same as the original list." << std::endl;
    } else {
        std::cout << "The even numbers are different from the original list." << std::endl;
    }

    return 0;
}