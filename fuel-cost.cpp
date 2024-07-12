#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> inputVector = {4, 7, 10, 15}; // For input 1, {5334}
    int sum = 0;
    for (int num : inputVector) {
        sum += std::max(0, (num / 3) - 2); // Modify to account for rounding down correctly 
    }
    std::cout << sum << std::endl;
    return 0;
}