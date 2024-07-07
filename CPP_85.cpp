#include <iostream>
#include <vector>

int add(std::vector<int> lst) {
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

    // Read input from user
    while(true) {
        std::cout << "Enter a number (or -1 to stop): ";
        std::cin >> num;
        
        if(num == -1)
            break;
        
        numbers.push_back(num);
    }

    // Calculate the sum of even numbers
    int result = add(numbers);

    // Print the result
    std::cout << "Sum of even numbers: " << result << std::endl;

    return 0;
}