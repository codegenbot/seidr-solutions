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
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }
    
    std::cout << "Sum of elements at odd positions: " << add(input) << std::endl;
    
    return 0;
}