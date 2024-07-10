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
    int odd_sum = 0; 

    int num;
    while(std::cin >> num) { 
        lst.push_back(num); 
    }
    odd_sum = double_the_difference(lst); 
    std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;
    return 0;
}

int main() {
    userInputMain();
    return 0;
}