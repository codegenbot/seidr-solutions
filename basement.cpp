#include <vector>

int basementIndex(const std::vector<int>& arr) {
    int total = 0;
    for (int i = 0; ; ++i) {
        if (total < 0) return i;
        if (i >= arr.size()) break;
        total += arr[i];
    }
    return -1;
}