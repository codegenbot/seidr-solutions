#include <vector>

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
    return 0;
}