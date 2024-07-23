#include <iostream>
#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i++){
        if(i % 2 != 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> numbers;
    int num;
    
    std::cout << "Enter the size of array: ";
    std::cin >> num;
    
    for(int i = 0; i < num; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers.push_back(i);
    }
    
    int result = add(numbers);
    std::cout << "Sum of odd elements: " << result << std::endl;
    
    return 0;
}