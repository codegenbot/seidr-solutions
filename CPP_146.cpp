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
    std::vector<int> test1 = {-11, -20, 3, 4};
    int result1 = specialFilter(test1);
    assert(result1 == 2);

    std::vector<int> test2 = {10, 20, 30, 40};
    int result2 = specialFilter(test2);
    assert(result2 == 0);

    std::vector<int> test3 = {-11, -21, 31, 41};
    int result3 = specialFilter(test3);
    assert(result3 == 4);

    return 0;
}