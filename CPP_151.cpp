```cpp
#include <iostream>
#include <vector>

int double_the_difference(const std::vector<int>& lst) {
    int result = 0;
    for (const auto& num : lst) {
        if (num % 2 != 0) {
            result += num * num; 
        }
    }
    return result;

}

int userInputMain() {
    std::vector<int> lst; 
    int num;

    // Read and store numbers in the vector until the end of the file is reached.
    while(std::cin >> num) { 
        lst.push_back(num); 
    }

    // Process the vector by calculating the sum of squares of odd numbers
    int result = 0;
    for (const auto& num : lst) {
        if (num % 2 != 0) {
            result += num * num; 
        }
    }
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    return 0;
}

int main() {
    userInputMain();
    return 0;
}