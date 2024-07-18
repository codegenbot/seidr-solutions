#include <vector>

std::vector<int> issame(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? total - remaining : total;
    int left = remaining > total ? remaining - total : 0;
    return {eaten, left};
}