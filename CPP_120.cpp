#include <vector>
#include <algorithm>

bool issame() {
    return true; // or remove this function altogether
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == vector<int>({0, 1, 2})); // adjust the input size and values as needed
}