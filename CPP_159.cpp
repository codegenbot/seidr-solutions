#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    return {eaten, max(0, total - remaining)};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}