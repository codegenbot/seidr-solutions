```
#include <vector>

bool issame(std::vector<int, std::allocator<int>> a, std::vector<int, std::allocator<int>> b) {
    // ...
}

std::vector<int, std::allocator<int>> even_odd_count(int num);

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}

std::vector<int, std::allocator<int>> even_odd_count(int num) {
    std::vector<int, std::allocator<int>> result;
    int countEven = 0, countOdd = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
        num /= 10;
    }
    result.push_back(countEven);
    result.push_back(countOdd);
    return result;
}
```