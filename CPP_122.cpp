#include <vector>
#include <cassert>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= -99 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 1);
    assert(add_elements({100, 50, -100, -50, 99}, 5) == 99); // 100 and -100 are out of range
    assert(add_elements({-99, 99, 0, 101, -101}, 5) == 0); // Elements 101 and -101 are out of range
    assert(add_elements({50, 25, 75, -25, -50}, 3) == 150); // Only first three elements are considered
    return 0;
}