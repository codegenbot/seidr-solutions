#include <iostream>
#include <vector>

int add(std::vector<int> lst); // Function prototype

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i++){
        if(i % 2 != 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    assert(add({4, 4, 6, 8}) == 12);
    std::vector<int> userNumbers;
    int number;

    // Read numbers from the user
    std::cout << "Enter some numbers (type 'stop' to finish):" << std::endl;
    while(true) {
        std::cin >> number;
        if(std::string(input) == "stop")
            break;
        userNumbers.push_back(number);
    }

    // Calculate and print the sum of odd numbers
    int total = add(userNumbers);
    std::cout << "Sum: " << total << std::endl;

    return 0;
}