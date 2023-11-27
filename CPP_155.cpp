#include <vector>
#include <cassert> 

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;
    std::string numString = std::to_string(abs(num));
    
    for (char digit : numString) {
        int num = digit - '0';
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}