```cpp
#include <iostream>
#include <vector>

int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (size_t i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0 || i % 4 == 0 && i % 3 != 0) {
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 == 0) {
            total += lst[i] * lst[i] * lst[i];
        }
    }
    return total;
}

int main() {
    std::vector<int> inputVector; 
    int n; 

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    size_t i = 0;
    int sum = 0;

    for(; i < n; ++i) {
        int num;
        while(true) {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> num;
            
            if (num >= 0 && num <= 100) {
                inputVector.push_back(num);
                sum++;
                break;
            } else {
                if(i < n-1){
                    std::cerr << "Invalid input. Please enter a number between 0 and 100." << std::endl;
                }else{
                    std::cerr << "You've reached the maximum capacity of your vector!" << std::endl;
                    break;
                }
            }
       
        
        if(i >= n) {
            break; 
        }
    }

    if (inputVector.size() != sum)
        inputVector.resize(sum);

    int result = sum_squares(inputVector);
    std::cout << "Sum of squares is: " << result << std::endl;

    return 0;
}