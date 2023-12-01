#include <vector>
#include <string>
#include <cassert>
#include <cmath>

std::vector<int> count_even_odd(int num){
    int evenCount = 0;
    int oddCount = 0;
    
    std::string numStr = std::to_string(std::abs(num));
    
    for(char c : numStr){
        int digit = c - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    std::vector<int> result = {evenCount, oddCount};
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    if (issame(count_even_odd(0), {1, 0})){
        std::cout << "Test case 1 passed." << std::endl;
    } else {
        std::cout << "Test case 1 failed." << std::endl;
    }
    
    if (issame(count_even_odd(123456789), {4, 5})){
        std::cout << "Test case 2 passed." << std::endl;
    } else {
        std::cout << "Test case 2 failed." << std::endl;
    }
    
    if (issame(count_even_odd(-987654321), {4, 5})){
        std::cout << "Test case 3 passed." << std::endl;
    } else {
        std::cout << "Test case 3 failed." << std::endl;
    }

    return 0;
}