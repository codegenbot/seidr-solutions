#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return {eaten, left};
}

bool is_same(pair<int, int> p1, pair<int, int> p2) {
    return p1 == p2;
}

int main() {
    assert(is_same(eat(4, 5, 1), make_pair(5, 0)));
    
    return 0;
}