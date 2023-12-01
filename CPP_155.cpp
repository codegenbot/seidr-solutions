#include <iostream> 
#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    std::string strNum = std::to_string(std::abs(num));
    
    for (char c : strNum) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(even_odd_count(0), {1, 0}));
    
    return 0;
}