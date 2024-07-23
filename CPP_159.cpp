#include <vector>
bool issame(std::vector<int>, std::vector<int>);
int eat(int, int, int);

std::pair<int, int> calculate(int number, int need, int remaining) {
    int total = number + need;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}