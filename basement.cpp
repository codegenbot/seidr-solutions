```
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int result = basement(nums);
    if (result == -1) {
        std::cout << "No negative sum found." << std::endl;
    } else {
        std::cout << "First index with negative sum: " << result << std::endl;
    }
    return 0;
}
```