#include <iostream>
#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && std::count(lst.begin(), lst.end(), num) >= num) {
            result = std::max(result, num);
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = {2, 3, 2, 2, 4, 4, 4, 4};
    std::cout << search(numbers) << std::endl;
    
    return 0;
}