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

    std::cout << "Enter the number of elements in the list: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> numbers.push_back;
    }

    int result = add(numbers);
    std::cout << "The sum of even elements is: " << result << std::endl;

    return 0;
}