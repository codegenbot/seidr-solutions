```cpp
#include <vector>
#include <assert.h>

int calculateSum() {
    assert(sumVector({127, 97, 8192}) == 1216);
    return 0;
}

int sumVector(std::vector<int> lst) {
    int total = 0;
    for (int i : lst) {
        total += i;
    }
    return total;

}

int main() {
    return calculateSum();
}