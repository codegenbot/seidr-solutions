```cpp
#include <iostream>
#include <vector>

int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            total += lst[i] * lst[i] * lst[i];
        }
    }
    return total;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;
    if (n > 0) {
        std::vector<int> inputVector(n); 
        for(int i = 0; i < n; ++i) {
            std::cout << "Enter element " << i + 1 << ": ";
            int num;
            std::cin >> num;
            inputVector.push_back(num); 
        }
        int result = sum_squares(inputVector);
        std::cout << "Sum of squares is: " << result << std::endl;
    } else {
        std::cerr << "Invalid input. Please enter a positive integer." << std::endl;
        return 1; // or some other exit status
    }
    return 0;
}