```cpp
#include <iostream>
#include <vector>

int double_the_difference(const std::vector<int>& lst) {
    int result = 0;
    for (const auto& num : lst) {
        if (num % 2 != 0) {
            result += num * num; // calculate the square of each odd number
        }
    }
    return result;
}

int main() {
    std::vector<int> lst; 
    int odd_sum = 0; 

    while(std::cin >> num) {
        lst.push_back(num); 
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }
    int result = double_the_difference(lst); 
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    assert(result == odd_sum);

    return 0;