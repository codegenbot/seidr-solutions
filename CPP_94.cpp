```cpp
#include <iostream>
#include <vector>

int sumVector(std::vector<int> lst) {
    int total = 0;
    for(int i : lst){
        total += i;
    }
    return total;
}

int main() {
    std::vector<int> lst({127, 97, 8192});
    int result = sumVector(lst);
    std::cout << "The sum is: " << result << std::endl;
    // Remove the following line and replace with your expected output.
    std::cout << "Expected sum: 1216" << std::endl;
    return 0;
}