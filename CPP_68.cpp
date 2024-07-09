#include <iostream>
#include <vector>

bool issame(int i1, int i2) {
    if (i1 == i2)
        return true;
    else
        return false;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    }

    return result;
}

int main() {
    int i1, i2;
    std::cout << "Enter two integers: ";
    std::cin >> i1 >> i2;
    
    if (issame(i1, i2)) 
        std::cout << "The numbers are same." << std::endl;  
    else
        std::cout << "The numbers are not the same." << std::endl;  

    return 0;
}