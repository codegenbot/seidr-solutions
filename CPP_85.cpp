```cpp
#include <vector>
#include <iostream>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i=1; i<lst.size(); i=i+2){
        if(i < lst.size() && lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> numbers;
    int num;

    // Read input from user
    while(std::cin >> num) {
        numbers.push_back(num);
    }

    // Call the add function and print the result
    int total = add(numbers);

    std::cout << "The sum of even numbers is: " << total << std::endl;
    
    return 0;
}