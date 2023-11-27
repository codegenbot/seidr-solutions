#include <vector>
using namespace std;
vector<int> eat(int need, int remaining) {
    int totalEaten = need + remaining;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    return std::vector<int>{totalEaten, left};
}