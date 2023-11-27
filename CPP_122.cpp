#include <vector>
#include <cassert>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
            count++;
        }

        if (count == 2) {
            break;
        }
    }

    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 1);
    return 0;
}