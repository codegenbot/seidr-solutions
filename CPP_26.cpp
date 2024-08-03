```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
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
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    std::cout << "Original list: ";
    for(int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    std::vector<int> uniqueNums = remove_duplicates(numbers);
    std::cout << "Unique list: ";
    for(int i : uniqueNums) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    return 0;
}