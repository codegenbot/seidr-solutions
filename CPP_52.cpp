```cpp
#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> numbers;

bool below_threshold(std::vector<int> numbers, int threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < threshold) return true;
    }
    return false;
}

int main() {
    int num = 0;

    std::cout << "Enter the number of elements: ";
    std::cin >> num;

    while(num <= 0){
        std::cout << "Invalid input. Please enter a positive integer.\n";
        std::cout << "Enter the number of elements: ";
        std::cin >> num;
    }

    numbers.resize(num); 

    for (int i = 0; i < num; i++) {
        int temp; 
        std::cin >> temp; 
        numbers.push_back(temp);
    }
    
    // test the function
    assert (!below_threshold(numbers, 10)); 

    return 0;
}