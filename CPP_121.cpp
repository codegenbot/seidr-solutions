````
#include <iostream>
#include <vector>

int solution(std::vector<int> arr) {
    int total = 0;
    for (int i : arr) {
        if (i % 2 == 1)
            total += i;
    }
    return total;
}

int main() {
    std::vector<int> arr = {3, 13, 2, 9};
    int sum = solution(arr);
    std::cout << "Result: " << sum << std::endl;
    return 0;
}
```