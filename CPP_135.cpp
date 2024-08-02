#include <vector>
#include <cassert>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) return i - 1;
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    int result = can_arrange({3, 2, 5, 4});
    std::cout << "The first pair of numbers that cannot be arranged in ascending order is at index: " << result << std::endl;
}