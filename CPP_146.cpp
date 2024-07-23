#include <vector>
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        if (x == 0 || x % 11 != 0) {
            count++;
        }
    }
    return count;

}

int main() {
    assert(specialFilter({}) == 0);
    // Test your function with different inputs here
    return 0;
}