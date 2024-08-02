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
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 1; i <= n; i++) {
        int num;
        std::cout << "Enter element " << i << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    
    int result = add(input);
    std::cout << "The sum of the even elements is: " << result << std::endl;
    
    return 0;
}