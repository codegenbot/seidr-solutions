#include <utility>
#include <cassert>

std::pair<int, int> issame(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? total - remaining : total;
    int left = remaining > total ? remaining - total : 0;
    return std::make_pair(eaten, left);
}

int main() {
    assert(issame(4, 5, 1) == std::make_pair(5, 0));
    return 0;
}  