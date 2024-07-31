#include <vector>
#include <cassert>

int search(std::vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int frequency = 0;
        for (int n : lst) {
            if (n == num) {
                frequency++;
            }
        }
        if (num > 0 && frequency >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    // Test cases
    std::vector<int> test1 = {2, 2, -1, 3, 1, 2, 0, 0};
    assert(search(test1) == 2);

    std::vector<int> test2 = {1, 1, 1};
    assert(search(test2) == 1);

    std::vector<int> test3 = {0, 0, 0, 0};
    assert(search(test3) == -1);

    return 0;
}