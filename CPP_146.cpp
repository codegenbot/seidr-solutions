```cpp
#include <vector>
int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / abs(num)) % 10 % 2 != 0 || (abs(num) % 10) % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> test1 = {-11, -12, -13};
    assert(specialFilter(test1) == 3);

    std::vector<int> test2 = {14, 15, 16};
    assert(specialFilter(test2) == 0);

    std::vector<int> test3 = {17, 18, 19};
    assert(specialFilter(test3) == 3);

    return 0;
}