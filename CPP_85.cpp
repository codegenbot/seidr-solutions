```cpp
#include <vector>
#include <iostream>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> numbers;
    int num;

    // Get input from user
    while(std::cin >> num) {
        numbers.push_back(num);
    }

    // Check if the input was valid (i.e., at least one number)
    if(numbers.size() > 1) {
        std::cout << "The sum of the even-indexed numbers is: " << add(numbers) << std::endl;
    } else {
        std::cout << "Invalid input. Please enter more than one number." << std::endl;
    }

    return 0;
}