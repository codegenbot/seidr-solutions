```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        std::cout << "Error: The input array is empty." << std::endl;
        exit(0);
    }
    int sum = 0;
    for(int i : array)
        sum += i;
    if (sum % 2 == 1)
        return array; 
    else
        return vector<int>(array.rbegin(), array.rend()); 
}

int main() {
    assert(std::issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}