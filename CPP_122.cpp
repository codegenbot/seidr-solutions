#include <vector>
#include <cassert>

int add_elements(std::vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        if (num >= 10 && num <= 99) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}) == 0);
    return 0;
}