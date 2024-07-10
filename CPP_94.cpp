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
    std::cout << "Expected output: " << 1216 << std::endl;
    return 0;
}