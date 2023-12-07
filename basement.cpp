```
#include <iostream>
#include <vector>

int basement(std::vector<int>& vec) {
    int sum = 0;
    for (size_t i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int result = basement(vec);
    std::cout << "The first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative: " << result << std::endl;
    return 0;
}
```