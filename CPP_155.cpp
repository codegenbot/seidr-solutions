```
#include <vector>
#include <iostream>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result;
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

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}
```