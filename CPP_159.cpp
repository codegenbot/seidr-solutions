#include <algorithm>
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return {eaten, left};
}

int main() {
    auto result = eat(4, 5, 1);
    assert(result[0] == 5 && result[1] == 0);

    return 0;
}