#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& numbers) {
    std::vector<int> result;
    int n = numbers.size();
    if(n == 0) return result; // handle empty vector
    
    for(int i = n-1; i >= 0; i--) {
        while(i > 0 && numbers[i] <= numbers[i-1]) i--;
        if(i == 0) result.push_back(numbers[0]);
        else result.push_back(numbers[i]);
    }
    return result;
}