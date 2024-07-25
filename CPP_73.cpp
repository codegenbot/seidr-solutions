#include <vector>
#include <cassert>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            ++changes;
        }
    }
    return changes;
}

void test_smallest_change(){
    assert(smallest_change({0, 1}) == 1);
}

int main() {
    test_smallest_change();
    return 0;
}