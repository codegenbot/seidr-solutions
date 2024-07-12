#include <string>
#include <cstdlib>

int count_nums(char** nums, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (atoi(nums[i]) >= 0) {
            sum = std::stoi(nums[i]);
        } else {
            sum = std::stoi("-" + std::to_string(std::abs(atoi(nums[i]))));
        }
        if (sum % 2 != 0)
            count++;
    }
    return count;

}

char* numbers[] = {"1"};
int main() {
    assert(count_nums(numbers, 1) == 1);
}