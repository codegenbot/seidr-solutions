#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return {eaten, left};
}

int main() {
    assert(eat(4, 5, 1) == vector<int>{5, 0});
    
    return 0;
}