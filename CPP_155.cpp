#include <iostream>
#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num){
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
    
    return {evenCount, oddCount};
}

int main(){
    std::vector<int> result = even_odd_count(0);
    if (is_same(result, {1, 0})){
        std::cerr << "Test case passed!" << std::endl;
    } else {
        std::cerr << "Test case failed!" << std::endl;
    }
    
    assert(is_same(even_odd_count(0), {1, 0}));
    
    return 0;
}