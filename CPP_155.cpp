#include <vector>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2);
    int countEven = 0;
    int countOdd = 0;
    
    while (num != 0) {
        int digit = num % 10;
        
        if (digit % 2 == 0)
            countEven++;
        else
            countOdd++;
            
        num /= 10;
    }
    
    result[0] = countEven;
    result[1] = countOdd;
    
    return result;
}