```cpp
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    return {totalEaten, left};
}

int main() {
    assert(eat(4, 5, 1) == vector<int>{5, 0});
    assert(eat(10, 2, 5) == vector<int>{12, 3});
    assert(eat(8, 0, 3) == vector<int>{8, 3});

    cout << "All assertions passed." << endl;
    return 0;
}