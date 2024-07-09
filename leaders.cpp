```cpp
#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& numbers) {
    std::vector<int> result;
    int n = numbers.size();
    if(n == 0) return result; 
    for(int i = n-1; i >= 0; i--) {
        while(i > 0 && numbers[i] <= numbers[i-1]) i--;
        if(i == 0) result.push_back(numbers[0]);
        else result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {16,17,4,3,5,2};
    std::vector<int> leadersResult = leaders(numbers);
    for(int leader : leadersResult) {
        std::cout << leader << " ";
    }
    return 0;
}