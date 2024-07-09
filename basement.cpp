```cpp
#include <vector>
#include <iostream>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> v = {1, 2, -5}; // test vector
    int result = basement(v);
    if (result == -1) 
        std::cout << "No such index exists." << std::endl;
    else 
        std::cout << "First negative sum at index: " << result << std::endl;
    return 0;
}