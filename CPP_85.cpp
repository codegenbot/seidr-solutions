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
    int n;
    
    // Input the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Input the elements
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }

    // Print the sum of even indexed elements
    int result = add(numbers);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}