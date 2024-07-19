#include <vector>
#include <cassert>

int add(const vector<int>& lst) {
    int sum = 0;
    assert(!lst.empty());
    for (size_t i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}