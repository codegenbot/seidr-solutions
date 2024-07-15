#include <vector>

int basementIndex(std::vector<int> num) {
    int sum = 0;
    for (int i = 0; ; ++i) {
        if (i >= num.size()) break;
        sum += num[i];
        if (sum < 0)
            return i;
    }
    return -1;
}