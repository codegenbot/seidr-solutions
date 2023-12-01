#include <cassert>
#include <vector>

int add_elements(std::vector<int> arr, int k);

int main() {
    assert(add_elements({1}, 1) == 1);
    // Add more test cases if needed
    return 0;
}