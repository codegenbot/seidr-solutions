#include <iostream>
#include <vector>

bool filter_integers(std::vector<int> inputVector) {
    std::vector<int> evenNumbers;
    for (int i = 0; i < inputVector.size(); i++) {
        if (inputVector[i] % 2 == 0) {
            evenNumbers.push_back(inputVector[i]);
        }
    }
    return evenNumbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> inputVector(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> inputVector[i];
    }

    std::vector<int> filteredVector = filter_integers(inputVector);

    bool isSame = issame(filteredVector, inputVector);
    if (isSame) {
        std::cout << "The even numbers are the same as the original list." << std::endl;
    } else {
        std::cout << "The even numbers are different from the original list." << std::endl;
    }

    return 0;
}