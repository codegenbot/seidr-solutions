#include <vector>
#include <iostream>
#include <climits>
#include <cassert>

using namespace std;

int smallest_change(std::vector<int> arr) {
    int min = INT_MAX;
    for (int i : arr) {
        if (i < min)
            min = i;
    }
    return min;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    return 0;
}