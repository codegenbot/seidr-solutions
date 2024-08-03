```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> uniqueNumbers;
    for(int i = 0; i < numbers.size(); i++){
        bool found = false;
        for(int j = 0; j < uniqueNumbers.size(); j++){
            if(uniqueNumbers[j] == numbers[i]){
                found = true;
                break;
            }
        }
        if(!found){
            uniqueNumbers.push_back(numbers[i]);
        }
    }
    return uniqueNumbers;
}

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    std::vector<int> uniqueNums = remove_duplicates(numbers);
    
    if(issame(uniqueNums, numbers)){
        std::cout << "The list is already unique." << std::endl;
    } else {
        std::cout << "Unique List: ";
        for(int i = 0; i < uniqueNums.size(); i++){
            std::cout << uniqueNums[i] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}