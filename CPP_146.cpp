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
    std::vector<int> test1 = {11, -12, 13, -14};
    int result1 = specialFilter(test1);
    assert(result1 == 3);

    std::vector<int> test2 = {-15, 16, -17, 18};
    int result2 = specialFilter(test2);
    assert(result2 == 4);

    return 0;
}