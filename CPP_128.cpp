```cpp
#include <iostream>
#include <vector>

int prod_signs(std::vector<int> arr){
    int product = 1;
    long long sum = 0;
    
    for(int i : arr) {
        if(i == 0)
            return 0;
        product *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }
    
    if(arr.empty())
        return -32768;
    
    return product * sum;
}

int main() {
    std::vector<int> arr = {1, -2, 3, 4};
    int result = prod_signs(arr);
    std::cout << "Result: " << result << std::endl;
    return 0;
}