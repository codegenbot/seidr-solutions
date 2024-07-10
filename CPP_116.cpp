```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> arr){
    std::sort(arr.begin(), arr.end(),
         [&](int a, int b) {
             int ones_a = __builtin_popcount(a);
             int ones_b = __builtin_popcount(b);
             if (ones_a != ones_b)
                 return ones_a < ones_b;
             return a < b;
         });
    return arr;
}

int main() {
    std::vector<int> arr = {5, 1, 3};
    arr = sort_array(arr);
    
    for(int i: arr) {
        std::cout << i << " ";
    }
    return 0;
}