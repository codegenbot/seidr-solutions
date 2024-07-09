#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

int eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return eaten + left;
}

bool issame(int result, vector<int> expected) {
    return result == expected[0] && result == expected[1];
}

int main() {
    assert (issame(eat(4, 5, 1) , {5, 0}));
    
    return 0;
}