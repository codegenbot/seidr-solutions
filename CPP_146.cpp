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
    std::vector<int> test1 = {11, -21, 3};
    int result1 = specialFilter(test1);
    assert(result1 == 2);

    std::vector<int> test2 = {-1000, 2001};
    int result2 = specialFilter(test2);
    assert(result2 == 1);

    std::vector<int> test3 = {1, -1, 10, 20, 21};
    int result3 = specialFilter(test3);
    assert(result3 == 0);

    return 0;
}