#include <vector>
#include <cmath>

int main() {
    int count = specialFilter({1,2,3});
    std::cout << "Count: " << count << std::endl;
    return 0;
}

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}