#include <vector>
#include <algorithm>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num;
        }
        std::sort(std::begin(std::to_string(num)), std::end(std::to_string(num)));
        bool isIncreasing = true;
        for (size_t i = 1; i < std::to_string(num).size(); ++i) {
            if (std::to_string(num)[i - 1] > std::to_string(num)[i]) {
                isIncreasing = false;
                break;
            }
        }
        if (!isIncreasing) {
            count++;
        }
    }
    return count;
}